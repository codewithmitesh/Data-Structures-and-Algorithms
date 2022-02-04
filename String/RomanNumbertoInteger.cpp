/**
 * @file RomanNumbertoInteger.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-10
 *
 * @copyright Copyright (c) 2021
 * Problem Link :- https://leetcode.com/problems/roman-to-integer/
 */
#include <bits/stdc++.h>
using namespace std;

// I 1
// V 5
// X 10
// L 50
// C 100
// D 500
// M 1000
int value(char s)
{
    if (s == 'I')
    {
        return 1;
    }
    else if (s == 'V')
    {
        return 5;
    }
    else if (s == 'X')
    {
        return 10;
    }
    else if (s == 'L')
    {
        return 50;
    }
    else if (s == 'C')
    {
        return 100;
    }
    else if (s == 'D')
    {
        return 500;
    }
    else if (s == 'M')
    {
        return 1000;
    }
}
int RomanToDecimal(string &input)
{
    int ans = 0;
    ans += value(input[0]);
    for (int i = 1; i < input.length(); i++)
    {

        if ((input[i] == 'V' || input[i] == 'X') && (input[i - 1] == 'I'))
        {
            ans = ans - value(input[i - 1]);
            ans = ans + value(input[i]) - value(input[i - 1]);
        }
        else if ((input[i] == 'L' || input[i] == 'C') && (input[i - 1] == 'X'))
        {
            ans = ans - value(input[i - 1]);
            ans = ans + value(input[i]) - value(input[i - 1]);
        }
        else if ((input[i] == 'D' || input[i] == 'M') && (input[i - 1] == 'C'))
        {
            ans = ans - value(input[i - 1]);
            ans = ans + value(input[i]) - value(input[i - 1]);
        }
        else
        {
            ans = ans + value(input[i]);
        }
    }
    return ans;
}

int main()
{

    cout << " Enter the String :- ";
    string input;
    getline(cin, input);

    cout << RomanToDecimal(input);
    return 0;
}
