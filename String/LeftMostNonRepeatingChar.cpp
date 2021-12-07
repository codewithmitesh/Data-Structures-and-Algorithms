/**
 * @file LeftMostNonRepeatingChar.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2021-12-05
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <bits/stdc++.h>
using namespace std;

// //Need Two Traversal of the String
// int leftMostNonRepeatingCharacter(string &str)
// {

//     int Count[256] = {0};
//     for (int i = 0; i < str.length(); i++)
//     {
//         Count[str[i]]++;
//     }
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (Count[str[i]] == 1)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// only one Traversal Of String
int leftMostNonRepeatingCharacter(string &str)
{
    int Count[256] = {-1};
    for (int i = 0; i < str.length(); i++)
    {

        if (Count[str[i]] == -1)
        {
            Count[str[i]] = i;
        }
        // -2 indicates it is repeating more than 1 time
        else
        {
            Count[str[i]] = -2;
        }
    }
    int res = INT_MAX;
    for (int i = 0; i < 256; i++)
    {
        if (Count[i] >= 0)
        {
            res = min(res, Count[i]);
        }
    }

    if (res == INT_MAX)
    {
        return -1;
    }
    else
    {
        return res;
    }
}

int main()
{

    cout << "Enter the String:- \n";
    string str;
    cin >> str;

    // int res = leftMostRepeatingCharacter(str);
    int res = leftMostNonRepeatingCharacter(str);
    cout << res << "\n";
    return 0;
}