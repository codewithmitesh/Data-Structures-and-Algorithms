/**
 * @file ShortesCommonSupersequence.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-09-06
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
string shortestCommonSupersequence(string str1, string str2)
{
    string s = str1, t = str2;
    // this quetion is first we need to generate the dp table of print LCS problem
    int ind1 = s.size();
    int ind2 = t.size();
    // 2d dp array  (this is 1 base indexing so we takes i-1 and j-1 whenever we try to access string )
    vector<vector<int>> dp(ind1 + 1, vector<int>(ind2 + 1, 0));
    // base cases
    for (int i = 0; i <= ind1; i++)
        dp[i][0] = 0;
    for (int j = 0; j <= ind2; j++)
        dp[0][j] = 0;
    // generating the dp
    for (int i = 1; i <= ind1; i++)
    {
        for (int j = 1; j <= ind2; j++)
        {
            // condition 1 :- if both same then add 1 in diagonaly ans
            if (s[i - 1] == t[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            // condition 2 :- if both are not same then take max of either left or up as it is
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    // now we have actually traverse in dp table and try to genererate the ans string
    int i = ind1, j = ind2;
    string ans = "";
    while (i > 0 and j > 0)
    {
        // if same means we need to take only one char one time and reduce buth string by 1
        if (s[i - 1] == t[j - 1])
        {
            ans += s[i - 1];
            i--;
            j--;
        } // else we take the max(left,up) value and reduce that string accordingly
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            ans += s[i - 1];
            i--;
        }
        else
        {
            ans += t[j - 1];
            j--;
        }
    }
    // atlast which ever string is remaining we need to take it whole
    while (i > 0)
    {
        ans += s[i - 1];
        i--;
    }
    while (j > 0)
    {
        ans += t[j - 1];
        j--;
    }
    // return the reversed stirng
    reverse(ans.begin(), ans.end());
    return ans;
}
*/