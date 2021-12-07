/**
 * @file RevereseByWords.cpp
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
// Code to simply reverse the string
void reverseString(string &str, int low, int high)
{

    while (low <= high)
    {
        swap(str[low], str[high]);
        low++, high--;
    }
}
void reverseByWords(string &str)
{
    int start = 0;
    for (int end = 0; end < str.length(); end++)
    {
        if (str[end] == ' ')
        {
            reverseString(str, start, end - 1);
            start = end + 1;
        }
    }
    reverseString(str, start, str.length() - 1); // code to reverese the last word
    reverseString(str, 0, str.length() - 1);
}

int main()
{

    cout << "Enter the String1:- \n";
    string str;
    getline(cin, str);

    reverseByWords(str);
    cout << str << '\n';

    return 0;
}