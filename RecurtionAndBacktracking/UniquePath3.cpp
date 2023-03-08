/**
 * @file UniquePath3.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-12-31
 *
 * @copyright Copyright (c) 2022
 *
 */
class Solution
{
public:
    int res = 0, empty = 1;
    void dfs(vector<vector<int>> &grid, int x, int y, int count)
    {

        if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == -1)
            return;
        // if the count becomes the equal to no of empty cell update the ans
        if (grid[x][y] == 2)
        {
            if (empty == count)
                res++;
            return;
        }
        // make this cell as visited by updating as -1
        grid[x][y] = -1;
        // traverse all fro direction
        dfs(grid, x + 1, y, count + 1);
        dfs(grid, x - 1, y, count + 1);
        dfs(grid, x, y + 1, count + 1);
        dfs(grid, x, y - 1, count + 1);
        // backtracking update the cell to 0 again so that the next path use this cell
        grid[x][y] = 0;
    }

    int uniquePathsIII(vector<vector<int>> &grid)
    {
        int start_x, start_y;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                    start_x = i, start_y = j;
                else if (grid[i][j] == 0)
                    empty++;
            }
        }
        // will simply maintain the counter as 1 so each time when we will ciunt equal to empty will update
        // simple dfs and backtracking
        dfs(grid, start_x, start_y, 0);
        return res;
    }
};