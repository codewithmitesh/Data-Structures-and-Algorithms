/**
 * @file kthSmallestEleInMatrix.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-18
 * 
 * @copyright Copyright (c) 2021
 * 
 * Problem Link :-  https://www.geeksforgeeks.org/kth-smallest-element-in-a-row-wise-and-column-wise-sorted-2d-array-set-1/
 *  
 * Solution :- TC = O(nlogk) SC : - O(N*N)
 int kthSmallest(int mat[MAX][MAX], int n, int k)
{

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            pq.push(mat[i][j]);
        }
    }

    for (int i = 1; i < k; i++)
    {
        pq.pop();
    }
    return pq.top();
}
 */

/**
 * @brief 
 * 
 * @param matrix TC O(n*m*logk)  AS :- O(k)
 * @param k 
 * @return int 
 
int kthSmallest(vector<vector<int>> &matrix, int k)
{
    int m = matrix.size(), n = matrix[0].size(); // For general, the matrix need not be a square
    priority_queue<int> maxHeap;
    for (int r = 0; r < m; ++r)
    {
        for (int c = 0; c < n; ++c)
        {
            maxHeap.push(matrix[r][c]);
            if (maxHeap.size() > k)
                maxHeap.pop();
        }
    }
    return maxHeap.top();
}
*/