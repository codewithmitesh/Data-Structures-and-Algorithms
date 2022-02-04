/**
 * @file SecondMostReapeatedString.cpp
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

string secFrequent(string arr[], int n)
{
    string ans = "";
    unordered_map<string, int> ump;
    for (int i = 0; i < n; i++)
    {
        ump[arr[i]]++;
    }
    int firstmax = INT_MIN, secondmax = INT_MIN;

    for (auto it : ump)
    {
        if (it.second > firstmax)
        {
            firstmax = it.second;
        }
    }
    for (auto it : ump)
    {
        if (it.second != firstmax && it.second > secondmax)
        {
            ans = it.first;
            secondmax = it.second;
        }
    }
    return ans;
}

int main()
{

    cout << "Enter the size array :- \n";
    int size;
    cin >> size;

    string arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    string res = secFrequent(arr, size);
    cout << res << '\n';
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}