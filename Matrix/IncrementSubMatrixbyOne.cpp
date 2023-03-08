/**
 * @file IncrementSubMatrixbyOne.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-17
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>> &q)
    {

        vector<vector<int>> ans(n, vector<int>(n, 0));

        for (auto x : q)
        {
            int r1 = x[0], c1 = x[1], r2 = x[2], c2 = x[3];
            for (int i = r1; i <= r2; i++)
            {
                ans[i][c1] += 1;
                if (c2 + 1 <= n - 1)
                {
                    ans[i][c2 + 1] -= 1;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                ans[i][j] += ans[i][j - 1];
            }
        }
        return ans;
    }
};