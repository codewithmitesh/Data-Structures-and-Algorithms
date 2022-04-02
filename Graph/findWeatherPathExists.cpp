/**
 * @file findWeatherPathExists.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-04-02
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief -
 * * Found the Same Question in Codebytes and Unable to do it
int flag = -1;
// This function is used to find weather path exists or not in the given graph
void DFS(int i, int j, vector<vector<int>> &grid)
{

    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
    {
        return;
    }
    if (grid[i][j] == 4)
    {
        return;
    }
    if (grid[i][j] == 0)
    {
        return;
    }
    if (grid[i][j] == 2)
    {
        flag = 1;
        return;
    }
    grid[i][j] = 4;

    DFS(i, j - 1, grid);
    DFS(i + 1, j, grid);
    DFS(i, j + 1, grid);
    DFS(i - 1, j, grid);
}
bool is_Possible(vector<vector<int>> &grid)
{
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 1)
            {
                DFS(i, j, grid);
            }
        }
    }

    if (flag == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
*/