/**
 * @file XtotalShapes.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-04-07
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
void counter(int i, int j, vector<vector<char>> &grid, vector<vector<bool>> &visited)
{
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() ||
        visited[i][j] == true || grid[i][j] == 'O')
        return;

    visited[i][j] = true;

    counter(i - 1, j, grid, visited); // Up
    counter(i + 1, j, grid, visited); // Down
    counter(i, j - 1, grid, visited); // Left
    counter(i, j + 1, grid, visited); // Right
}

int xShape(vector<vector<char>> &grid)
{
    // Code here
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'X' && visited[i][j] == false)
            {
                counter(i, j, grid, visited);
                count++;
            }
        }
    }

    return count;
}
*/