/**
 * @file LongestPallindromicSubsequence.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-13
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 *
int longestCommonSubsequence(string text1, string text2)
{

    int n = text1.size(), m = text2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    // memset(dp,-1,sizeof(dp));

    // dp top-down verison

    // Base case make all 0 0 here we will be takin 1 base indexing so that we cana maintain the i-1 j-1 case
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;
    for (int i = 0; i <= m; i++)
        dp[0][i] = 0;

    // 1 base indexing hence i will be i-1 and j will be j - 1 of memoization
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (text1[i - 1] == text2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];

            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    return dp[n][m];
}
int longestPalindromeSubseq(string s)
{

    string s1 = s;
    reverse(s1.begin(), s1.end());

    return longestCommonSubsequence(s, s1);
}
*/