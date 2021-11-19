/**
 * @file SpiralTraversal.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-15
 * 
 * @copyright Copyright (c) 2021
 * 
 * Problem Link :- https://leetcode.com/problems/spiral-matrix/ 
 * 
 * Solution :- 

vector<int> res;

int top = 0, bottom = matrix.size() - 1, right = matrix[0].size() - 1, left = 0;

while (top <= bottom && left <= right)
{

    for (int i = left; i <= right; i++)
    {
        res.push_back(matrix[top][i]);
    }
    top++;
    for (int i = top; i <= bottom; i++)
    {
        res.push_back(matrix[i][right]);
    }
    right--;
    if (top <= bottom)
    {
        for (int i = right; i >= left; i--)
        {
            res.push_back(matrix[bottom][i]);
        }
        bottom--;
    }

    if (left <= right)
    {

        for (int i = bottom; i >= top; i--)
        {
            res.push_back(matrix[i][left]);
        }
        left++;
    }
}
return res;















 * 
 * 
 */

