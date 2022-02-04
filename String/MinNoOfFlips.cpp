/**
 * @file MinNoOfFlips.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-10
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <bits/stdc++.h>
using namespace std;
// tc:-O(2^n)
int MinNoOfFlips(string &str)
{

    int res1 = 0, res2 = 0;
    // Creating Case1 of 01010101010101010101010101010101010101
    for (int i = 0; i < str.length(); i++)
    {
        if (i % 2 == 0 && str[i] == '1')
        {
            str[i] = '0';
            res1++;
        }
        else
        {
            str[i] = '1';
            res1++;
        }
    }
    cout << res1;
    
    int ans = min(res1, res2);
    return ans;
}

int main()
{

    cout << "Enter the String  :- \n";
    string str1;
    cin >> str1;

    int res = MinNoOfFlips(str1);
    cout << res << " ";

    return 0;
}