/**
 * @file LeftMostRepeatingElement.cpp
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

int leftMostRepeatingCharacter(string &str)
{

    int Count[256] = {0};
    int res = INT_MAX;

    for (int i = str.length() - 1; i >= 0; i--)
    {

        if (Count[str[i]] == 0)
        {
            Count[str[i]]++;
        }
        else
        {
            res = min(res, i);
            Count[str[i]]++;
        }
    }

    if (res == INT_MAX)
        return -1;
    else
        return res;
}

// char leftMostRepeatingCharacter(string &str)
// {

//     int Count[256] = {0};
//     int res = INT_MAX;

//     for (int i = str.length() - 1; i >= 0; i--)
//     {

//         if (Count[str[i]] == 0)
//         {
//             Count[str[i]]++;
//         }
//         else
//         {
//             res = min(res, i);
//             Count[str[i]]++;
//         }
//     }

//     if (res == INT_MAX)
//         return '#';
//     else
//         return str[res];
// }

int main()
{

    cout << "Enter the String:- \n";
    string str;
    cin >> str;

    // int res = leftMostRepeatingCharacter(str);
    char res = leftMostRepeatingCharacter(str);
    cout << res << "\n";
    return 0;
}