/**
 * @file WildCardMatching.cpp
 * @author Mitesh Taking (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-12-03
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool func(int i, int j, string &t, string &s, vector<vector<int>> &dp)
{
    // Base case
    if (i == 0 && j == 0)
        return true;
    if (i == 0 && j > 0)
        return false;
    if (j == 0 && i > 0)
    {
        for (int k = 1; k <= i; k++)
        {
            if (t[k - 1] != '*')
                return false;
        }
        return true;
    }
    if (dp[i][j] != -1)
        return dp[i][j];

    // if they matched
    if (t[i - 1] == s[j - 1] || t[i - 1] == '?')
        return dp[i][j] = func(i - 1, j - 1, t, s, dp);

    // if They DO NOT match
    if (t[i - 1] == '*')
    {
        return dp[i][j] = func(i - 1, j, t, s, dp) || func(i, j - 1, t, s, dp);
    }

    return dp[i][j] = false; // (a == b) no thats why false;
}
bool isMatch(string s, string t)
{
    int n = t.size();
    int m = s.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    return func(n, m, t, s, dp);
}
*/