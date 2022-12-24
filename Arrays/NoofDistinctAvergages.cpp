/**
 * @file NoofDistinctAvergages.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-11-13
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int md = 1e9 + 7;

int solve(int ind, int l, int h, int z, int o, vector<long long> &dp)
{

    if (ind > h)
        return 0;

    if (dp[ind] != -1)
        return dp[ind];

    long long first = solve(ind + z, l, h, z, o, dp) % md; // zero
    long long sec = solve(ind + o, l, h, z, o, dp) % md;   // one
    // if the given lenght is inrange then add 1 to it of itself string
    dp[ind] = (first + sec + (ind >= l && ind <= h)) % md;

    return dp[ind];
}

int countGoodStrings(int low, int high, int z, int o)
{
    vector<long long> dp(high + 1, -1);
    return solve(0, low, high, z, o, dp);
}
*/