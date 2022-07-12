/**
 * @file UniquePath2.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-12
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int helper(int m, int n, vector<vector<int>> &grid, vector<vector<int>> &arr)
{
    if (m < 0 || n < 0)
        return 0;
    if (grid[m][n] == 1)
        return 0;
    if (m == 0 && n == 0)
        return 1;
    if (arr[m][n] != -1)
        return arr[m][n];
    int a = helper(m, n - 1, grid, arr);
    int b = helper(m - 1, n, grid, arr);
    return arr[m][n] = a + b;
}
int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
{
    int m = obstacleGrid.size(), n = obstacleGrid[0].size();
    vector<vector<int>> arr(m, vector<int>(n, -1));
    return helper(m - 1, n - 1, obstacleGrid, arr);
}

*/