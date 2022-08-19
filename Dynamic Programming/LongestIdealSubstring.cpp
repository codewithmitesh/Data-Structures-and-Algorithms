/**
 * @file LongestIdealSubstring.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-07
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int solve(string &s, int k, vector<vector<int>> &dp, int i, int prev)
{

    // if completly traversed return 0 bcz no more length
    if (i == s.length())
        return 0;

    if (dp[i][prev] != -1)
    {
        return dp[i][prev];
    }

    int ans = 0;
    // choosee when condition satisties and for the first time measns prev = 26 ho tab
    if (prev == 26 || abs(prev - (s[i] - 'a')) <= k)
    {
        ans = 1 + solve(s, k, dp, i + 1, s[i] - 'a');
    }
    // not chose and taking the max of length together
    ans = max(ans, solve(s, k, dp, i + 1, prev));
    // storing this ans for this pair in 2D dp
    dp[i][prev] = ans;
    // returning ans for the nect iteration
    return ans;
}

int longestIdealString(string s, int k)
{

    vector<vector<int>> dp(s.length(), vector<int>(27, -1));

    return solve(s, k, dp, 0, 26);
}
*/