/**
 * @file noOfIslandsMMIMP.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-04-02
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
void DFS(vector<vector<char>> &grid, int i, int j)
{
    // OutofBound Checking
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
        return;
    // retun if it is already visited or it is water then return
    if (grid[i][j] == '2' || grid[i][j] == '0')
        return;

    // mark the current as visited
    grid[i][j] = '2';

    DFS(grid, i + 1, j);
    DFS(grid, i, j - 1);
    DFS(grid, i - 1, j);
    DFS(grid, i, j + 1);
}

int numIslands(vector<vector<char>> &grid)
{

    int count = 0;

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {

            if (grid[i][j] == '1')
            {
                DFS(grid, i, j);
                ++count;
            }
        }
    }
    return count;
}*/