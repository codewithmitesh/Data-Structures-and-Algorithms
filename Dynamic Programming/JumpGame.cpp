/**
 * @file JumpGame.cpp
 * @author Mitesh T (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-05
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool solve(vector<int> &nums, int idx, vector<int> &dp)
{
    // if we go out of boundry then return false
    if (idx >= nums.size())
        return false;
    // if we reached the last index then return true
    if (idx == nums.size() - 1)
        return true;
    // if there is overlaping subproblemm check in dp array
    if (dp[idx] != -1)
    {
        return dp[idx];
    }
    // we will go check from 1 to k=nums[i] that if we can reach to end
    int k = nums[idx];
    for (int i = 1; i <= k; i++)
    {
        // call for for each sized jump [1,num[i]]
        if (solve(nums, idx + i, dp) == true)
        {
            // if possible update the dp to true
            return dp[idx] = 1;
        }
    }
    // if not possible return false
    return dp[idx] = 0;
}
bool canJump(vector<int> &nums)
{
    vector<int> dp(nums.size() - 1, -1);
    int idx = 0;
    return solve(nums, idx, dp);
}
*/