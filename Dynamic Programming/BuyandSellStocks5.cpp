/**
 * @file BuyandSellStocks5.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-10-16
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int maxProfit(vector<int> &p)
{
    // here size will be n+2 because we are doing ind +2 hence agar n-1 ke liye woah ind+2 karne se out of bound naa hojaye issliye hum n+2 size ka rakhte hai
    vector<vector<int>> dp(p.size() + 2, vector<int>(2, 0));
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
                profit = max(0 + dp[ind + 1][1], p[ind] + dp[ind + 2][0]);
            }
            dp[ind][buy] = profit;
        }
    }

    return dp[0][0];
}
*/