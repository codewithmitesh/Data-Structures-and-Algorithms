/**
 * @file AnagramOfString.cpp
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

bool isAnagrammSorted(string &str1, string &str2)
{

    if (str1.length() != str2.length())
    {
        return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return (str1 == str2);
}

bool isAnagramm(string &str1, string &str2)
{

    int Count[256] = {0};

    if (str1.length() != str2.length())
    {
        return 0;
    }

    for (int i = 0; i < str1.length(); i++)
    {
        Count[str1[i]]++;
    }
    for (int i = 0; i < str2.length(); i++)
    {
        Count[str2[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (Count[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{

    cout << "Enter the String1:- \n";
    string str1;
    cin >> str1;

    bool flag;
    cout << "Enter the String2:- \n";
    string str2;
    cin >> str2;

    // flag = isAnagrammSorted(str1, str2);
    flag = isAnagramm(str1, str2);
    if (flag)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}
