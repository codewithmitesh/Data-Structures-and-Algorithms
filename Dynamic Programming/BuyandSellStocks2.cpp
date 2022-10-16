/**
 * @file BuyandSell2.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-10-16
 *
 * @copyright Copyright (c) 2022
 *
 */
/** Memoization
 *
int func(int i, int buy, vector<int> &p, vector<vector<int>> &dp)
{
    // base case if array khatmn toh simply return 0 agar buy bhi karrakha hai and khatam hogaya bechanhi toh woh case consider nahi hoga aur max lena hai hame simply
    if (i == p.size())
    {
        return 0;
    }
    // if alreayd calculated then return ana
    if (dp[i][buy] != -1)
        return dp[i][buy];

    int profit = 0;
    // if buy is availabl then two choices we can buy or pass if we buy then add -arr[i] (take wala case) and send for sell else simply jump next to buy(not take wala case)
    // finaall we take both cases ka maximum

    if (buy)
    {
        profit = max(-p[i] + func(i + 1, 0, p, dp), func(i + 1, 1, p, dp));
    }
    // if we cant buy then also two  possiblities we sell or donot sell if sell then add profit else we skip to next and take the maximum of both
    else
    {
        profit = max(p[i] + func(i + 1, 1, p, dp), func(i + 1, 0, p, dp));
    }
    return dp[i][buy] = profit;
}
int maxProfit(vector<int> &p)
{
    // declaring the dp array
    vector<vector<int>> dp(p.size(), vector<int>(2, -1));
    // calling thre recursion function
    return func(0, 1, p, dp);
}
*/
/**
 * Tabulation :-
 *
 int maxProfit(vector<int> &p)
{
    // declaring the dp array
    vector<vector<int>> dp(p.size() + 1, vector<int>(2, 0));
    // calling thre recursion function
    int n = p.size();
    // base case
    dp[n][0] = dp[n][1] = 0;

    for (int ind = n - 1; ind >= 0; ind--)
    {
        for (int buy = 0; buy <= 1; buy++)
        {
            int profit = 0;
            if (buy == 0)
            { // We can buy the stock
                profit = max(0 + dp[ind + 1][0], -(p[ind]) + dp[ind + 1][1]);
            }
            if (buy == 1)
            { // We can sell the stock
                profit = max(0 + dp[ind + 1][1], p[ind] + dp[ind + 1][0]);
            }
            dp[ind][buy] = profit;
        }
    }

    return dp[0][0];
}
 */
