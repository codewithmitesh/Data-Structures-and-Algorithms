/**
 * @file Convertasentenceintoitsequivalentmobilenumerickeypad.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 *
 * @brief
 * @version 0.1
 * @date 2021-12-09
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <bits/stdc++.h>
using namespace std;

string printConvertes(string &input)
{
    string str[26] = {"2", "22", "222", "3", "33", "333", "4", "44", "444", "5", "55", "555", "6", "66", "666", "7", "77", "777", "7777", "8", "88", "888", "9", "99", "999", "9999"};
    string ans = "";
    for (int i = 0; i < input.length(); i++)
    {

        if (input[i] == ' ')
        {
            ans = ans + '0';
        }
        else
        {
            ans = ans + str[input[i] - 'A'];
        }
    }
    return ans;
}

int main()
{

    cout << " Enter the String :- ";
    string input;
    getline(cin, input);

    cout << printConvertes(input);
    return 0;
}