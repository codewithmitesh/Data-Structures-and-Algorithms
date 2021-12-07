/**
 * @file PalindromString.cpp
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

    cout << "Enter the String:- \n";
    string str;
    cin >> str;

    int i = 0, j = str.size() - 1;
    bool flag = 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if (flag)
    {
        cout << " Yes";
    }
    else
    {
        cout << "No";
    }

    cout << "\n";

    return 0;
}