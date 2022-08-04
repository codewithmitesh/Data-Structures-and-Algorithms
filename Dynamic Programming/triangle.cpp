/**
 * @file triangle.cpp
 * @author mitesh tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-19
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int solve(vector<vector<int>> &tri, vector<vector<int>> &dp, int i, int j)
{

    if (i == tri.size() - 1)
    {
        return tri[i][j];
    }

    if (dp[i][j] != -1)
        return dp[i][j];

    int dow = tri[i][j] + solve(tri, dp, i + 1, j);
    int dia = tri[i][j] + solve(tri, dp, i + 1, j + 1);

    return dp[i][j] = min(dow, dia);
}

int minimumTotal(vector<vector<int>> &triangle)
{

    int n = triangle.size();
    vector<vector<int>> dp(n, vector<int>(n, -1));

    return solve(triangle, dp, 0, 0);
}

*/