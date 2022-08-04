/**
 * @file CherryPickUp2.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-19
 *
 * @copyright Copyright (c) 2022
 *
 */
// 3D Dp MMMMIMP
/**
int f(int i, int j1, int j2, int r, int c, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp)
{
    if (j1 < 0 || j2 < 0 || j1 >= c || j2 >= c)
        return -1e8;
    if (i == r - 1)
    {
        if (j1 == j2)
            return grid[i][j1];
        else
            return grid[i][j1] + grid[i][j2];
    }
    if (dp[i][j1][j2] != -1)
        return dp[i][j1][j2];
    int maxi = -1e8;
    for (int d = -1; d <= 1; d++)
    {
        for (int d1 = -1; d1 <= 1; d1++)
        {
            int val = 0;
            if (j1 == j2)
                return grid[i][j1];
            else
            {
                val = grid[i][j1] + grid[i][j2];
                val = val + f(i + 1, j1 + d, j2 + d1, r, c, grid, dp);
                maxi = max(maxi, val);
            }
        }
    }
    return dp[i][j1][j2] = maxi;
}
int cherryPickup(vector<vector<int>> &grid)
{

    int r = grid.size();
    int c = grid[0].size();

    vector<vector<vector<int>>> dp(r, vector<vector<int>>(c, vector<int>(c, -1)));

    return f(0, 0, c - 1, r, c, grid, dp);
}
*/