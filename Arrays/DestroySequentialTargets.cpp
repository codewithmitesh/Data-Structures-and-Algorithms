/**
 * @file DestroySequentialTargets.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-18
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int destroyTargets(vector<int> &nums, int space)
    {
        int ans = INT_MAX, sum = 0;
        // for(auto it:nums){
        //     sum+=it;
        // }
        unordered_map<int, int> ump;
        int mx = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int reminder = nums[i] % space;
            ump[reminder]++;
            mx = max(mx, ump[reminder]);
        }
        // int ans = INT_MAX;
        for (auto it : nums)
        {
            if (mx == ump[it % space])
            {
                ans = min(ans, it);
            }
        }
        return ans;
    }
};