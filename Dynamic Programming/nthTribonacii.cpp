/**
 * @file nthTribonacii.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-30
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int solve(int n, vector<int> &dp)
    {
        if (n == 0)
            return dp[0] = 0;
        if (n == 1 or n == 2)
            return dp[1] = 1;
        if (dp[n] != -1)
        {
            return dp[n];
        }
        return dp[n] = solve(n - 1, dp) + solve(n - 2, dp) + solve(n - 3, dp);
    }
    int tribonacci(int n)
    {
        vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
};