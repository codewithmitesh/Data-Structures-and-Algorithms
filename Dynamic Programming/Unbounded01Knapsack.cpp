/**
 * @file Unbounded01Knapsack.cpp
 * @author Mitesh T (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-09
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int solve(int w, int wt[], int val[], vector<vector<int>> &dp, int i)
{
    if (i == 0)
    {
        if (wt[i] <= w)
        {
            return w / wt[i] * val[i];
        }
        else
        {
            return 0;
        }
    }

    if (dp[i][w] != -1)
        return dp[i][w];

    int Nottake = solve(w, wt, val, dp, i - 1);
    int take = INT_MIN;
    if (wt[i] <= w)
    {
        take = val[i] + solve(w - wt[i], wt, val, dp, i);
    }
    return dp[i][w] = max(take, Nottake);
}
int knapSack(int N, int W, int val[], int wt[])
{
    // code here

    int n = N;
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
    return solve(W, wt, val, dp, n - 1);
}
*/