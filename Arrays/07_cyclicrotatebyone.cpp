// /**
//  * @file 07_cyclicrotatebyone.cpp
//  * @author Mitesh Tank (codewithmitesh@gmail.com)
//  * @brief 
//  * @version 0.1
//  * @date 2021-11-03
//  * 
//  * @copyright Copyright (c) 2021
//  * 
//  */
// /**
//  * TC O(n) SC O(1)
//     int toRotate = arr[n-1];
//     for(int i = n-1;i>=1;i--){
//         arr[i] = arr[i-1];
//     }
//     arr[0] = toRotate;
// */
#include<bits/stdc++.h>
// #include <iostream.h>
using namespace std;
int main()

{

static int var[5];

int count=0;

var[++count]=++count;

for(count=0;count<5;count++)

cout<<var[count];

return 0;

}