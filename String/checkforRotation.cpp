/**
 * @file checkforRotation.cpp
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

bool CheckforRotation(string &text, string &pattern)
{
    if (text.length() != pattern.length())
    {
        return false;
    }
    if ((text + text).find(pattern) != string::npos)
    {
        return true;
    }
    else
    {
        return false;
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
    int flag = CheckforRotation(Text, Pattern);
    if (flag != 0)
    {
        cout << "Yes it is Rotation ";
    }
    else
    {
        cout << "No it is not rotation ";
    }

    return 0;
}