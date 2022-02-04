/**
 * @file SplitStringintoEqualnoof0sand1s.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-07
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <bits/stdc++.h>
using namespace std;

int countofEqual0sand1s(string &str)
{
    int Countof0s = 0, res = 0;
    int Countof1s = 0;
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == '0')
        {
            Countof0s++;
        }
        else
        {
            Countof1s++;
        }

        if (i != 0 && Countof0s == Countof1s)
        {
            res++;
        }
    }
    cout << "res = " << res << endl;
    return res;
}

int main()
{
    string str;
    cout << "Enter the Binary String :- \n";
    cin >> str;

    int ans = countofEqual0sand1s(str);

    cout << "Count of equal 0sand1s are :- " << ans << "\n";
    return 0;
}