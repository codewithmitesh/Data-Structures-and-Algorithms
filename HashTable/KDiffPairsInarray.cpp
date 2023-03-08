/**
 * @file KDiffPairsInarray.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-03
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        unordered_map<int, int> a;
        for (int i : nums)
            a[i]++;
        int ans = 0;
        for (auto x : a)
        {
            if (k == 0)
            {
                if (x.second > 1)
                    ans++;
            }
            else if (a.find(x.first + k) != a.end())
                ans++;
        }

        return ans;
    }
};