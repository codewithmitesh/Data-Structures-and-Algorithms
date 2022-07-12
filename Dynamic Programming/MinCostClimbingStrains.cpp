/**
 * @file MinCostClimbingStrains.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-10
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int solve(vector<int> &cost, vector<int> &dp, int n)
{

    if (n <= 1)
    {
        dp[n] = cost[n];
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    return dp[n] = cost[n] + min(solve(cost, dp, n - 1), solve(cost, dp, n - 2));
}

int minCostClimbingStairs(vector<int> &cost)
{
    int n = cost.size();

    vector<int> dp(n + 1, -1);

    return min(solve(cost, dp, n - 1), solve(cost, dp, n - 2));
}
*/