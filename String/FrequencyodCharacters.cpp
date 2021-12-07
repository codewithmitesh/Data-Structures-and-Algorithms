/**
 * @file
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-05
 *
 * @copyright Copyright (c) 2021
 *
 * * Simillar to Print all the duplicates in the input string

 */
#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Enter the String:- \n";
    string str;
    cin >> str;

    int Count[256] = {0};

    for (int i = 0; i < str.length(); i++)
    {

        Count[(int)str[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (Count[i] != 0)
        {
            cout << (char)i << " " << Count[i] << "\n";
        }
    }

    cout << "\n";

    return 0;
}