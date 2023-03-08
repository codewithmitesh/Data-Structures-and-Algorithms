/**
 * @file MaximumSumofHourGlasses.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-28
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int maxSum(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                grid[i][j] += grid[i][j - 1];
            }
        }
        int ans = 0;
        for (int i = 2; i < m; i++)
        {
            int sum = 0;
            for (int j = 2; j < n; j++)
            {
                sum = grid[i][j] - (j > 2 ? grid[i][j - 3] + grid[i - 2][j - 3] : 0) + grid[i - 2][j] + grid[i - 1][j - 1] - grid[i - 1][j - 2];
                ans = max(ans, sum);
            }
        }
        return ans;
    }
};