/**
 * @file PrintAllSubstring.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-09
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <bits/stdc++.h>
using namespace std;
// tc:-O(2^n)
void printAllSubsequences(string s, int i, string curr)
{

    if (i == s.length())
    {
        cout << curr << '\n';
        return;
    }
    // not including the ith character into the curr string
    printAllSubsequences(s, i + 1, curr);
    // including the ith character into the curr string
    printAllSubsequences(s, i + 1, curr + s[i]);
}

int main()
{

    cout << "Enter the String  :- \n";
    string str1;
    cin >> str1;

    printAllSubsequences(str1, 0, "");

    return 0;
}