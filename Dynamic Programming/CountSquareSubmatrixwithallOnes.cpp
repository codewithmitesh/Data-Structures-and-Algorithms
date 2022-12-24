/**
 * @file CountSquareSubmatrixwithallOnes.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-14
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int solve(vector<vector<int>> &matrix, int m, int n, int i, int j, vector<vector<int>> &dp)
{
    if (i < 0 or i >= m or j < 0 or j >= n or matrix[i][j] == 0)
    {
        return 0;
    }
    if (dp[i][j] != -1)
        return dp[i][j];
    int right = solve(matrix, m, n, i, j + 1, dp);
    int bottom = solve(matrix, m, n, i + 1, j, dp);
    int bottom_right = solve(matrix, m, n, i + 1, j + 1, dp);

    return dp[i][j] = 1 + min({right, bottom, bottom_right});
}

int countSquares(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1)
            {
                ans += solve(matrix, m, n, i, j, dp);
            }
        }
    }
    return ans;
}
*/