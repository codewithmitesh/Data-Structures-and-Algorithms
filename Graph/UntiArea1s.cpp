/**
 * @file UntiArea1s.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-19
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * Here no need to maintain visited array because nly 1s and 0 are there so to check wheather its visited or not we just make grid[i][j] = 0 so itis visited
 */
/**
int dfs(vector<vector<int>> &grid, int i, int j)
{

    // outof bound
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0)
    {
        return 0;
    }

    grid[i][j] = 0;

    int l = dfs(grid, visited, i, j - 1);
    int r = dfs(grid, visited, i, j + 1);
    int u = dfs(grid, visited, i - 1, j);
    int d = dfs(grid, visited, i + 1, j);
    int ul = dfs(grid, visited, i - 1, j - 1);
    int dl = dfs(grid, visited, i + 1, j - 1);
    int ur = dfs(grid, visited, i - 1, j + 1);
    int dr = dfs(grid, visited, i + 1, j + 1);

    return l + r + u + d + ul + dl + ur + dr + 1;
}
int findMaxArea(vector<vector<int>> &grid)
{

    int n = grid.size(), m = grid[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, 0));
    int temp = 0;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; i++)
        {
            if (grid[i][j])
            {
                temp = dfs(grid, visited, i, j);
                ans = max(ans, temp);
            }
        }
    }

    return ans;
}
*/