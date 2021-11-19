/**
 * @file PrintAllElementInSortedOrder.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX
#define N 4

void printSorted(int mat[][N])
{

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int j = 0; j < N; j++)
    {
        pq.push(mat[0][j]);
    }
   cout<< pq.top()<<" ";
    pq.pop();
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            pq.push(mat[i][j]);
            cout<< pq.top()<<" "; 
            pq.pop();
        }
    }
}

int main()
{
    int mat[N][N] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50},
    };
    printSorted(mat);
    return 0;
}