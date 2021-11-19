/**
 * @file CommonElementsInAllRow.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-18
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 * Problem Statement :- https://www.geeksforgeeks.org/common-elements-in-all-rows-of-a-given-matrix/
 * 
 */
// Solution :-
#include <bits/stdc++.h>
using namespace std;

// number of rows and columns
#define M 4
#define N 5

void printCommonElements(int mat[M][N])
{
    unordered_map<int, int> ump;

    // Inserting with value 1 of 1st row of matrix
    for (int j = 0; j < N; j++)
        ump[mat[0][j]] = 1;

    // traverse the matrix
    for (int i = 1; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {

            // if element is present in current row and it is also present in Map with value equal to its row number (i) then will increase value by 1.

            if (ump[mat[i][j]] == i)
            {
                ump[mat[i][j]] = i + 1;

                // also while traversing it self we will check if it is last row and value of element is equals to total row then it will be ans and print it.
                if (i == M - 1 && ump[mat[i][j]] == M)
                    cout << mat[i][j] << " ";
            }
        }
    }
}

int main()
{
    int mat[M][N] =
        {
            {1, 2, 1, 4, 8},
            {3, 7, 8, 5, 1},
            {8, 7, 7, 3, 1},
            {8, 1, 2, 7, 9},
        };

    printCommonElements(mat);

    return 0;
}
