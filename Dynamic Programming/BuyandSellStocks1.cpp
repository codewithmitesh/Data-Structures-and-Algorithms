/**
 * @file BuyandSellStocks1.cpp
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
    // using dp :- use previous result to calculate the current's result
    int maxProAns = INT_MIN, currentMin = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        int cost = prices[i] - currentMin;
        maxProAns = max(maxProAns, cost);
        // here we are using privious currMin to check if it is still minimum or not if yes then do nothing else update current as minimum
        currentMin = min(currentMin, prices[i]);
    }
    // is ans is negative meanswe need to buy and sell on same day to maintain profit as zero instead negative
    return maxProAns < 0 ? 0 : maxProAns;
}
*/