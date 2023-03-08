/**
 * @file HouseRobber.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-12
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * Vry easy to under stand :-)
 * - Hold te maximum sum
 * - You either pick or nonpick
 * - if pick then add to it and call for ind-2 bcz cant take adjacent
 * - if dont pick then add 0 and call for ind-1 bcz cant take adjacent
 * - Base case when 0 and 1 there
 * - Simple dp and it return int then max sum of that subsequence
 *
 */
/**
int solve(vector<int> &nums, vector<int> &dp, int ind)
{

    if (ind == 0)
    {

        return nums[ind];
    }
    // if(ind==1) return nums[ind];

    if (ind < 0)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];

    int pick = nums[ind] + solve(nums, dp, ind - 2);
    int nonPick = 0 + solve(nums, dp, ind - 1);

    return dp[ind] = max(pick, nonPick);
}

int rob(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n + 1, -1);
    return solve(nums, dp, n - 1);
}
*/