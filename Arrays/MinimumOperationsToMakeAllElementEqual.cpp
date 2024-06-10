/**
 * @file MinimumOperationsToMakeAllElementEqual.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-27
 *
 * @copyright Copyright (c) 2023
 *
 */
typedef long long ll;
class Solution
{
public:
    vector<long long> minOperations(vector<int> &nums, vector<int> &queries)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> presum(n, 0);
        // int prev = 0;
        // presum[0] = nums[0];
        for (int i = 0; i < n; i++)
        {
            presum[i] += nums[i];
            if (i)
                presum[i] += presum[i - 1];
        }

        vector<ll> ans;
        for (auto x : queries)
        {
            ll ind = upper_bound(nums.begin(), nums.end(), x) - nums.begin();
            ll leftsum = 0;
            if (ind > 0)
                leftsum = presum[ind - 1];
            ll rightsum = (presum[n - 1] - leftsum);
            ans.push_back(ind * x - leftsum + rightsum - (n - ind) * x);
        }
        return ans;
    }
};