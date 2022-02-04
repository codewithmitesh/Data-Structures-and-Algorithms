/**
 * @file MinimumSwaptoBalancetheString.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-11
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <bits/stdc++.h>
using namespace std;

int MiniSwap(string &str)
{
    int n = str.length();
    int open = 0, close = 0, unbalanced = 0, swapRequired = 0;
    for (int i = 0; i < n; i++)
    {

        if (str[i] == '[')
        {
            open++;
            if (unbalanced > 0)
            {
                swapRequired = swapRequired + unbalanced;
                unbalanced--;
            }
        }
        else
        {
            close++;
            unbalanced = close - open;
        }
    }
    return swapRequired;
}

int main()
{
    string str;
    cin >> str;

    int MinimumSwapRequired = MiniSwap(str);
    cout << "MinimumSwapRequired :- " << MinimumSwapRequired << '\n';

    return 0;
}