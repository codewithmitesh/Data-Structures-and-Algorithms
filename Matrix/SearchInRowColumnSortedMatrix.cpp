/**
 * @file SearchInRowColumnSortedMatrix.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-15
 * 
 * @copyright Copyright (c) 2021
 * 
 * Problem Link :- https://www.geeksforgeeks.org/search-in-row-wise-and-column-wise-sorted-matrix/
 * 
 * Solution :- 

bool search(vector<vector<int>> matrix, int n, int m, int x)
{
    int flag = 0;
    int row_pointer = 0, cols_pointer = m - 1;
    while (row_pointer < n && cols_pointer >= 0)
    {
        if (matrix[row_pointer][cols_pointer] == x)
        {
            flag = 1;
            break;
        }
        else if (matrix[row_pointer][cols_pointer] > x)
        {
            cols_pointer--;
        }
        else
        {
            row_pointer++;
        }
    }
    return flag;
}

 *  
 * 
 * 
 * 
 * 
 */


