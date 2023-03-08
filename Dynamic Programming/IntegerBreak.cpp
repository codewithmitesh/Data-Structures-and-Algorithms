/**
 * @file IntegerBreak.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-10
 *
 * @copyright Copyright (c) 2023
 *
 */
int solve(int i, vector<int> &dp)
{

    if (i == 1)
        return 1;

    if (dp[i] != -1)
        return dp[i];

    int maxi = INT_MIN;

    for (int k = 1; k < i; k++)
    {

        cout << "chala"
             << " ";
        int prod = k * max(i - k, solve(i - k, dp));
        maxi = max(maxi, prod);
    }
    return dp[i] = maxi;
}
int integerBreak(int n)
{

    vector<int> dp(n + 1, -1);

    return solve(n, dp);
}