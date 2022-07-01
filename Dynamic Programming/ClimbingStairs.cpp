/**
 * @file ClimbingStairs.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-06-25
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int solve(int n, vector<int> &dp)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 1;
    if (n == 2)
        return 2;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
}

int climbStairs(int n)
{

    vector<int> dp(n + 1, -1);
    return solve(n, dp);
}
*/