/**
 * @file CoinChange.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-08
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int solve(vector<int> &coins, int T, vector<vector<int>> &dp, int i)
{

    if (i == 0)
    {

        if (T % coins[0] == 0)
        {
            return T / coins[0];
        }
        return 1e9;
    }

    if (dp[i][T] != -1)
    {
        return dp[i][T];
    }

    int nottake = 0 + solve(coins, T, dp, i - 1);
    int take = 1e9;
    if (coins[i] <= T)
    {
        take = 1 + solve(coins, T - coins[i], dp, i);
    }

    return dp[i][T] = min(take, nottake);
}

int coinChange(vector<int> &coins, int amount)
{

    int n = coins.size();

    vector<vector<int>> dp(coins.size(), vector<int>(amount + 1, -1));
    int ans = solve(coins, amount, dp, n - 1);

    if (ans >= 1e9)
    {
        return -1;
    }
    else
    {
        return ans;
    }
}
*/