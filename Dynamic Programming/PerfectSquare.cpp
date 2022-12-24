/**
 * @file PerfectSquare.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-22
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int solve(int n, vector<int> &dp)
{

    if (n == 0)
        return 0;

    int ans = INT_MAX;
    if (dp[n] != -1)
        return dp[n];

    for (int i = 1; i * i <= n; i++)
    {

        ans = min(ans, 1 + solve(n - i * i, dp));
    }

    return dp[n] = ans;
}

int numSquares(int n)
{

    vector<int> dp(n + 1, -1);

    int ans = solve(n, dp);
    return dp[n];
    */