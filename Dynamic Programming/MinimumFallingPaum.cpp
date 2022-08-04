/**
 * @file MinimumFallingPaum.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-19
 *
 * @copyright Copyright (c) 2022
 *
 *
 *
 */
/**
int solve(vector<vector<int>> &mat, vector<vector<int>> &dp, int i, int j)
{

    if (j < 0 || j >= mat.size())
        return 1e9;

    if (i == 0)
        return mat[i][j];

    if (dp[i][j] != -1)
        return dp[i][j];

    int up = mat[i][j] + solve(mat, dp, i - 1, j);
    int ld = mat[i][j] + solve(mat, dp, i - 1, j - 1);
    int rd = mat[i][j] + solve(mat, dp, i - 1, j + 1);

    return dp[i][j] = min(up, min(ld, rd));
}
int minFallingPathSum(vector<vector<int>> &matrix)
{
    // variable starting and ending points

    int n = matrix.size();
    vector<vector<int>> dp(n, vector<int>(n, -1));

    int ans = INT_MAX;
    for (int j = 0; j < n; j++)
    {
        int currMin = solve(matrix, dp, n - 1, j);
        ans = min(ans, currMin);
    }

    return ans;
}
*/