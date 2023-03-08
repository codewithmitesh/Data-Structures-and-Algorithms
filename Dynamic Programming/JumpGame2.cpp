/**
 * @file JumpGame2.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2023-01-01
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int solve(int i, vector<int> &nums, vector<int> &dp)
    {
        if (i == (nums.size() - 1))
        {
            return 0;
        }
        if (dp[i] != -1)
            return dp[i];
        int minCount = 1e8;
        for (int j = 1; j < nums[i]; j++)
        {
            int count = 1 + solve(j, nums, dp);
            minCount = min(minCount, count);
        }
        return dp[i] = minCount;
    }
    int jump(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> dp(n + 1, -1);
        return solve(0, nums, dp);
    }
};