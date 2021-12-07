/**
 * @file CheckifgivenStringisSubseqence.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-05
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Enter the String1:- \n";
    string str;
    cin >> str;

    bool flag = 1;
    cout << "Enter the String2:- \n";
    string str1;
    cin >> str1;
    int j = 0;

    for (int i = 0; i < str.length() && j < str1.length(); i++)
    {

        if (str[i] == str1[j])
        {
            j++;
        }
    }
    flag = (j == str1.length());
    if (flag)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    cout << "\n";

    return 0;
}