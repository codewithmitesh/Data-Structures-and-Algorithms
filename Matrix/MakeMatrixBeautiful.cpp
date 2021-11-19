/**
 * @file MakeMatrixBeautiful.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-18
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 * Problem link :- https://www.geeksforgeeks.org/minimum-operations-required-make-row-column-matrix-equals/
 * 
 * Solution :-
 int findMinOpeartion(vector<vector<int>> matrix, int n)
{

    int row_array[n];
    for (int i = 0; i < n; i++)
        row_array[i] = 0;
    int cols_array[n];
    for (int i = 0; i < n; i++)
        cols_array[i] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            row_array[i] += matrix[i][j];
            cols_array[j] += matrix[i][j];
        }
    }

    int higest_row_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (row_array[i] > higest_row_sum)
        {
            higest_row_sum = row_array[i];
        }
    }
    int higest_cols_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (cols_array[i] > higest_cols_sum)
        {
            higest_cols_sum = cols_array[i];
        }
    }

    int sum = max(higest_row_sum, higest_cols_sum);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += (sum - row_array[i]);
    }

    return res;
} 
 */
