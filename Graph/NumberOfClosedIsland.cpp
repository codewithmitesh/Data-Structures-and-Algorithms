/**
 * @file NumberOfClosedIsland.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-23
 *
 * @copyright Copyright (c) 2023
 *
 */

class Solution
{
public:
    void dfsMark(int i, int j, vector<vector<int>> &grid)
    {
        if (i < 0 || j < 0 or i >= grid.size() or j >= grid[0].size() || grid[i][j] == 1)
        {
            return;
        }

        if (grid[i][j] == 0)
        {
            grid[i][j] = 1;
        }

        dfsMark(i - 1, j, grid);
        dfsMark(i, j + 1, grid);
        dfsMark(i + 1, j, grid);
        dfsMark(i, j - 1, grid);
    }

    int closedIsland(vector<vector<int>> &grid)
    {
        // visited<int>
        int n = grid.size(), m = grid[0].size();
        int i = 0;
        for (int j = 0; j < m; j++)
        {
            dfsMark(i, j, grid);
        }
        i = n - 1;
        for (int j = 0; j < m; j++)
        {
            dfsMark(i, j, grid);
        }
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            dfsMark(i, j, grid);
        }
        j = m - 1;
        for (int i = 0; i < n; i++)
        {
            dfsMark(i, j, grid);
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 0)
                {
                    dfsMark(i, j, grid);
                    ans++;
                }
            }
        }
        return ans;
    }
};