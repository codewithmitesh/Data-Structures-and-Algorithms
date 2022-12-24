/**
 * @file EvaluateBoolenExpressioinTrue.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-19
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int mod = 1e9 + 7;

ll solve(string &s, int n)
{
    vector<vector<vector<ll>>> dp(n, vector<vector<ll>>(n, vector<ll>(2, 0)));

    for (int i = 0; i < n; i++)
    {
        dp[i][i][true] = s[i] == 'T';
        dp[i][i][false] = s[i] == 'F';
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i + 1; j < n; j++) // since i<j & i==j are base cases.
        {
            for (int isTrue = 0; isTrue < 2; isTrue++)
            {
                ll ways = 0;

                for (int k = i + 1; k < j; k = k + 2)
                {

                    ll LT, LF, RT, RF;

                    LT = dp[i][k - 1][true];
                    LF = dp[i][k - 1][false];
                    RT = dp[k + 1][j][true];
                    RF = dp[k + 1][j][false];

                    if (s[k] == '^')
                    {
                        if (isTrue)
                        {
                            ways = (ways + (LT * RF) % mod + (LF * RT) % mod) % mod;
                        }

                        else
                        {
                            ways = (ways + (LT * RT) % mod + (LF * RF) % mod) % mod;
                        }
                    }
                    else if (s[k] == '&')
                    {
                        if (isTrue)
                        {
                            ways = (ways + (LT * RT) % mod) % mod;
                        }
                        else
                        {
                            ways = (ways + (LT * RF) % mod + (LF * RT) % mod + (LF * RF) % mod) % mod;
                        }
                    }
                    else if (s[k] == '|')
                    {
                        if (isTrue)
                        {
                            ways = (ways + (LT * RT) % mod + (LT * RF) % mod + (LF * RT) % mod) % mod;
                        }
                        else
                        {
                            ways = (ways + (LF * RF) % mod) % mod;
                        }
                    }
                }

                dp[i][j][isTrue] = ways;
            }
        }
    }

    return dp[0][n - 1][true];
}

int main()
{
    string s;
    cin >> s;

    int n = s.size();

    cout << solve(s, n);

    return 0;
}
*/