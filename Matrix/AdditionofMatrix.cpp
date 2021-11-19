/**
 * @file AdditionofMatrix.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief 
 *  Question Link:- 
 * @version 0.1
 * @date 2021-11-13
 * 
 * @copyright Copyright (c) 2021
 * 
 * Solution:- 
 * 
 *  vector<vector<int> > sumMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
       
      vector<vector<int>> res;            
      
      if(A.size() != B.size() ) return res;
      
      for(int i = 0 ;i<A.size();i++){
          
       if(A[i].size()!=B[i].size()){
           break;
       }   
          
         vector<int> temp;  
         
         for(int j = 0;j<A[i].size();j++){
             temp.push_back(A[i][j] + B[i][j]);
         }
         
         res.push_back(temp);
          
          
      }
      
      return res;
      
    }
 * 
 * 
 * 
 */