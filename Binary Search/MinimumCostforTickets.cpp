/**
 * @file MinimumCostforTickets.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-28
 *
 * @copyright Copyright (c) 2023
 *
 */
int solve(int ind, vector<int> &nums, vector<int> &costs, vector<int> &dp)
{
    if (ind >= nums.size())
        return 0;

    if (dp[ind] != -1)
        return dp[ind];
    // take all 3 choices;
    int indOne = upper_bound(nums.begin(), nums.end(), nums[ind] + 1 - 1) - nums.begin();
    int oneD = solve(indOne, nums, costs, dp) + costs[0];
    int indSeven = upper_bound(nums.begin(), nums.end(), nums[ind] + 7 - 1) - nums.begin();
    int SevenD = solve(indSeven, nums, costs, dp) + costs[1];
    int indThirty = upper_bound(nums.begin(), nums.end(), nums[ind] + 30 - 1) - nums.begin();
    int ThirtyD = solve(indThirty, nums, costs, dp) + costs[2];
    return dp[ind] = min(oneD, min(ThirtyD, SevenD));
}
int mincostTickets(vector<int> &nums, vector<int> &costs)
{

    sort(nums.begin(), nums.end());
    vector<int> dp(nums.size() + 1, -1);
    return solve(0, nums, costs, dp);
}