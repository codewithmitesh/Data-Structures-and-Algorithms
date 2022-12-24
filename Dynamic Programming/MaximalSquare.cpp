/**
 * @file MaximalSquare.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-07
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int maxi = 0;
int solve(vector<vector<char>> &matrix, int i, int j, int n, int m, vector<vector<int>> &dp)
{
    // out of bound condition
    if (i >= n || j >= m)
        return 0;
    // if already calculated return that ans
    if (dp[i][j] != -1)
        return dp[i][j];
    // check left right and diagonally
    int right = solve(matrix, i, j + 1, n, m, dp);
    int diag = solve(matrix, i + 1, j + 1, n, m, dp);
    int bottom = solve(matrix, i + 1, j, n, m, dp);
    // if it is 1 then only make the minimum of all 3 and update dp by adding 1
    if (matrix[i][j] == '1')
    {
        // take minimum and add in dp (minimum is because we are adding only if the squeare formed for example if right is outbound bottom is 0 and diag is outbount then there is only 1 size square and which is itself hence take mini)
        dp[i][j] = 1 + min(right, min(diag, bottom));
        // also take hold of maxi together
        maxi = max(maxi, dp[i][j]);
        return dp[i][j];
    }
    else
    {
        // if we encounter the '0' then returrn 0 no square can be formed
        return 0;
    }
}
int maximalSquare(vector<vector<char>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    int ans = solve(matrix, 0, 0, n, m, dp);
    return maxi * maxi;
}
*/