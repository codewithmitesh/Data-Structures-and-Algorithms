/**
 * @file 90DegreeClockwise.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-15
 * 
 * @copyright Copyright (c) 2021
 * 
 * Problem Link :- https://practice.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1
 * 
 * Solution :- 
 * 
void rotateby90(vector<vector<int>> &matrix, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < matrix[i].size(); j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    int first = 0, last = n - 1;
    while (first < last)
    {
        swap(matrix[first], matrix[last]);
        first++;
        last--;
    }
}
*
 */

