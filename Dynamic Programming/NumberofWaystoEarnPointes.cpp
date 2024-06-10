/**
 * @file NumberofWaystoEarnPointes.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-11
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    const int mod = 1000000007;
    int solve(int ind, int tar, vector<vector<int>> &dp, vector<vector<int>> &types)
    {
        if (tar == 0)
            return 1;

        if (ind == types.size())
        {
            return 0;
        }

        if (dp[ind][tar] != -1)
            return dp[ind][tar] % mod;
        long long ans = 0;
        for (int i = 0; i <= types[ind][0]; i++)
        {
            if (tar - types[ind][1] * i >= 0)
            {
                // tar = tar - types[ind][1];
                ans += (solve(ind + 1, tar - types[ind][1] * i, dp, types));
            }
            else
                break;
        }
        return dp[ind][tar] = ans % mod;
    }
    int waysToReachTarget(int tar, vector<vector<int>> &types)
    {
        int n = types.size();
        vector<vector<int>> dp(n + 1, vector<int>(tar + 1, -1));
        return solve(0, tar, dp, types);
    }
};