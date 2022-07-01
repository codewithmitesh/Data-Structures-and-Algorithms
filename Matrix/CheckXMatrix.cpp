/**
 * @file CheckXMatrix.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-06-26
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool checkXMatrix(vector<vector<int>> &grid)
{
    int n = grid.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (grid[i][j] == 0)
                    return false;
            }
            else if (i + j == n - 1)
            {
                if (grid[i][j] == 0)
                    return false;
            }
            else
            {
                if (grid[i][j] != 0)
                    return false;
            }
        }
    }
    return true;
}
*/
