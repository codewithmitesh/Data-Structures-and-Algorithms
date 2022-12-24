/**
 * @file MinimumCostTOCutTheRope.cpp
 * @author Mitesh tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-14
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int solve(int i, int j, vector<int> &c, vector<vector<int>> &dp)
{
    if (i > j)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    long mini = INT_MAX;
    ;
    for (int idx = i; idx <= j; idx++)
    {
        long cost = c[j + 1] - c[i - 1] + solve(i, idx - 1, c, dp) + solve(idx + 1, j, c, dp);
        mini = min(mini, cost);
    }
    return dp[i][j] = mini;
}
int minCost(int n, vector<int> &cuts)
{
    int c = cuts.size();
    cuts.push_back(0);
    cuts.push_back(n);
    sort(cuts.begin(), cuts.end());
    vector<vector<int>> dp(c + 1, vector<int>(c + 1, -1));
    return solve(1, c, cuts, dp);
}
*/