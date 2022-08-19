/**
 * @file LongestCommonSubstring.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-13
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int longestCommonSubstr(string S1, string S2, int n, int m)
{
    // this is a dp tabulation approach and directly tbulation approach is suggested to impement
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    // hendeling the base case making first row and column 0 because we are making matrix as 1 base indexing to handle the case i-1 j-1 successfully
    for (int i = 0; i < n; i++)
        dp[i][0] = 0;
    for (int j = 0; j < m; j++)
        dp[0][j] = 0;
    // Traversing in dp array and updating the length accordingly to find the lcss
    // our ans will be the maximum element in the dp matrix so just find the maximum of matrix and return
    // we will together maintain the max value
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {

            if (S1[i - 1] == S2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                ans = max(ans, dp[i][j]);
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    return ans;
}
*/