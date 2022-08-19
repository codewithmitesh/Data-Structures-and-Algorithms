/**
 * @file LongestCommonSubsequence.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-09
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int solve(string text1, string text2, int ind1, int ind2, vector<vector<int>> &dp)
{

    if (ind1 < 0 || ind2 < 0)
    {
        return 0;
    }

    if (dp[ind1][ind2] != -1)
        return dp[ind1][ind2];

    // if match  then add 1 and return from here

    if (text1[ind1] == text2[ind2])
    {
        return dp[ind1][ind2] = 1 + solve(text1, text2, ind1 - 1, ind2 - 1, dp);
    }
    // not match go ind-1 with first stirng and then second string and take max of both

    return dp[ind1][ind2] = 0 + max(solve(text1, text2, ind1 - 1, ind2, dp), solve(text1, text2, ind1, ind2 - 1, dp));
}

int longestCommonSubsequence(string text1, string text2)
{

    int n = text1.length(), m = text2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    return solve(text1, text2, n - 1, m - 1, dp);
}
*/