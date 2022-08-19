/**
 * @file CoinChange2..cpp
 * @author Mitesh T (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-09
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int solve(vector<int> &coins, vector<vector<int>> &dp, int i, int T)
{

    if (i == 0)
    {

        if (T % coins[i] == 0)
        {
            return 1;
        }
        return 0;
    }

    if (dp[i][T] != -1)
        return dp[i][T];

    int nottake = solve(coins, dp, i - 1, T);
    int take = 0;
    if (coins[i] <= T)
    {
        take = solve(coins, dp, i, T - coins[i]);
    }

    return dp[i][T] = take + nottake;
}

int change(int amount, vector<int> &coins)
{
    // to parameters ind and target(amount) each time changing o this is a 2D DP
    vector<vector<int>> dp(coins.size() + 1, vector<int>(amount + 1, -1));
    int n = coins.size();
    return solve(coins, dp, n - 1, amount);
}
*/