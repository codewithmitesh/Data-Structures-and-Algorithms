/**
 * @file RodCutting.cpp
 * @author Mitesh T (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-09
 *
 * @copyright Copyright (c) 2022
 *
 *
 */
/**
int solve(int price[], vector<vector<int>> &dp, int i, int n)
{

    if (i == 0)
    {
        return (n * price[i]);
    }

    if (dp[i][n] != -1)
    {
        return dp[i][n];
    }

    int nottake = solve(price, dp, i - 1, n);
    int take = INT_MIN;
    int rodLength = i + 1;
    if (rodLength <= n)
    {
        take = price[i] + solve(price, dp, i, n - rodLength);
    }

    return dp[i][n] = max(take, nottake);
}
int cutRod(int price[], int n)
{
    // code here

    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    return solve(price, dp, n - 1, n);
}
*/