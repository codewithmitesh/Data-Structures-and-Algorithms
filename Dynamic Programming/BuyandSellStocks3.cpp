/**
 * @file BuyandSellStocks3.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-10-16
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int maxProfit(vector<int> &prices)
{

    // here we need 3 parameters ind buy and capacity hence 3D dp and we are Doing tabulation here so

    int n = prices.size();
    // here dp vector is initialized as 0 hence we do not need to handle base case saperatly
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(3, 0)));

    for (int ind = n - 1; ind >= 0; ind--)
    {
        for (int buy = 0; buy <= 1; buy++)
        {
            for (int cap = 1; cap <= 2; cap++)
            {

                long long profit = 0;
                if (buy == 0)
                { // We can buy the stock
                    profit = max(dp[ind + 1][0][cap],
                                 -(prices[ind]) + dp[ind + 1][1][cap]);
                }
                if (buy == 1)
                { // We can sell the stock
                    profit = max(0 + dp[ind + 1][1][cap],
                                 prices[ind] + dp[ind + 1][0][cap - 1]);
                }
                dp[ind][buy][cap] = profit;
            }
        }
    }

    return dp[0][0][2];
}
*/