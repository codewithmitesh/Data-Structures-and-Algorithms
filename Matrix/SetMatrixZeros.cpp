/**
 * @file SetMatrixZeros.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-18
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 * Problem Link :- https://leetcode.com/problems/set-matrix-zeroes/
 * 
 * 
 * Solution :- TC :- O(n*m) AS :- O(n+m) can further implement in O(1)
 void setZeroes(vector<vector<int>> &matrix)
{

    int m = matrix.size();
    int n = matrix[0].size();
    int row_array[m];
    for (int i = 0; i < m; i++)
        row_array[i] = 0;
    int cols_array[n];
    for (int i = 0; i < n; i++)
        cols_array[i] = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                row_array[i] = 1;
                cols_array[j] = 1;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (row_array[i] == 1 || cols_array[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}
 * 
 */
