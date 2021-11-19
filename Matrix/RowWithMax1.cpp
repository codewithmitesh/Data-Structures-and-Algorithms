/**
 * @file RowWithMax1.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-16
 * 
 * @copyright Copyright (c) 2021
 * 
 * Problem  Statment :- https://www.geeksforgeeks.org/find-the-row-with-maximum-number-1s/ 
 * 
 * Solution :- 
int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    // code here TC - O(n+m)

    int row_pointer = 0, cols_pointer = m - 1, res = -1;

    while (row_pointer < n && cols_pointer >= 0)
    {

        if (arr[row_pointer][cols_pointer] == 1)
        {
            cols_pointer--;
            res = max(res, row_pointer);
        }
        else
        {
            row_pointer++;
        }
    }
    return res;
}
*/