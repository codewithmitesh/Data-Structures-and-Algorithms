/**
 * @file MCM.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-14
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int solve(int i, int j, int arr[], vector<vector<int>> &dp)
{

    // if i becomes means no more 2 matrixes can be generated
    if (i == j)
        return 0;
    int mini = 1e9;
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    // try all partitions
    for (int k = i; k < j; k++)
    {

        int steps = arr[i - 1] * arr[k] * arr[j] + solve(i, k, arr, dp) + solve(k + 1, j, arr, dp);
        if (steps < mini)
            mini = steps;
    }

    return dp[i][j] = mini;
}

int matrixMultiplication(int N, int arr[])
{

    vector<vector<int>> dp(N + 1, vector<int>(N, -1));

    return solve(1, N - 1, arr, dp);
}
*/