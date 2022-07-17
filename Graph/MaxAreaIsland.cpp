/**
 * @file MaxAreaIsland.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-15
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int solve(int i, int j, int m, int n, vector<vector<int>> &grid, vector<vector<int>> &visited)
{

    if (i < 0 || j < 0 || i >= m || j >= n)
    {
        return 0;
    }

    if (grid[i][j] == 0)
    {
        return 0;
    }

    if (visited[i][j] == 1)
    {
        return 0;
    }

    visited[i][j] = 1;

    int left = solve(i, j - 1, m, n, grid, visited);
    int right = solve(i, j + 1, m, n, grid, visited);
    int up = solve(i - 1, j, m, n, grid, visited);
    int down = solve(i + 1, j, m, n, grid, visited);

    return 1 + left + right + up + down;
}

int maxAreaOfIsland(vector<vector<int>> &grid)
{

    int m = grid.size();
    int n = grid[0].size();
    int ans = INT_MIN, temp = INT_MIN;
    vector<vector<int>> visited(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visited[i][j] == 0)
            {
                temp = solve(i, j, m, n, grid, visited);
            }
            ans = max(ans, temp);
        }
    }
    return ans;
}
*/