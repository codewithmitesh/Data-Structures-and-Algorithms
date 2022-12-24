/**
 * @file DominoTromino.cpp
 * @author
 * @brief
 * @version 0.1
 * @date 2022-12-24
 *
 * @copyright Copyright (c) 2022
 *
 */
/* @author Mitesh Tank (codewithmitesh) :- https://linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh , https://twitter.com/codewithmitesh
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh */

/**
 *  int numTilings(int n)
{
    const int mod = 1e9 + 7;
    if (n <= 2)
        return n;
    vector<int> dp(n + 1, 0);
    dp[1] = 1, dp[2] = 2, dp[3] = 5;
    for (int i = 4; i <= n; i++)
    {
        dp[i] = (2 * dp[i - 1] % mod + dp[i - 3] % mod) % mod;
    }
    return dp[n] % mod;
}
*/