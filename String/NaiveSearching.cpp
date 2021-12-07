/**
 * @file NaiveSearching.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-06
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <bits/stdc++.h>
using namespace std;

// TC O( (n-m+1)*m )  AS:= O(1);
void NaiveSearching(string &text, string &pattern)
{

    int n = text.length();
    int m = pattern.length();

    for (int i = 0; i <= n - m; i++)
    {
        int j = 0;
        while (j < m)
        {
            if (text[j + i] != pattern[j])
            {
                break;
            }
            j++;
        }

        if (j == m)
        {
            cout << i << " ";
        }
    }
}

int main()
{

    cout << "Enter the Text String :- \n";
    string Text;
    cin >> Text;

    cout << "Enter the Pattern String:- \n";
    string Pattern;
    cin >> Pattern;

    cout << "Searching :---------------------------\n";
    NaiveSearching(Text, Pattern);

    return 0;
}