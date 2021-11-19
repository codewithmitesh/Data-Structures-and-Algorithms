/**
 * @file TransposeOfMatrix.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-15
 * 
 * @copyright Copyright (c) 2021
 * 
 * Problem Link:- https://practice.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1
 *
 * Solutions:-
 * 
 * void transpose(vector<vector<int> >& matrix, int n)
    { 
        
        for(int i = 0;i<n;i++){
            for(int j = i;j<matrix[i].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        
    }
 * 
 * 
 * 
 * 
 */