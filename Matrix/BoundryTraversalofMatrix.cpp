/**
 * @file BoundryTraversalofMatrix.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-13
 * 
 * @copyright Copyright (c) 2021
 * 
 *   Solution :-  
vector<int> res;

if (n == 1)
{
    for (int i = 0; i < m; i++)
        res.push_back(matrix[0][i]);
}
else if (m == 1)
{
    for (int i = 0; i < n; i++)
        res.push_back(matrix[i][0]);
}
else
{
    //n X m
    for (int i = 0; i < m; i++)
    {
        res.push_back(matrix[0][i]);
    }
    for (int i = 1; i < n; i++)
    {
        res.push_back(matrix[i][m - 1]);
    }

    for (int i = m - 2; i >= 0; i--)
    {
        res.push_back(matrix[n - 1][i]);
    }
    for (int i = n - 2; i >= 1; i--)
    {
        res.push_back(matrix[i][0]);
    }
}
return res;
}
 * 
 */
