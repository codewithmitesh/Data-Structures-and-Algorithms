/**
 * @file LongestCommonPrefix.cpp
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
string longestCommonPrefix(vector<string> &strs)
{

    string temp = strs[0];

    int i = 0, ans = INT_MAX;

    for (int i = 1; i < strs.size(); i++)
    {
        int j = 0, k = 0, res = 0;

        while (j < temp.length() && k < strs[i].size())
        {

            if (temp[j] == strs[i][k])
            {
                res++;
            }
            else
            {
                break;
            }
            j++;
            k++;
        }

        ans = min(ans, res);
    }
    return temp.substr(0, ans);
}

int main()
{
    int size = 0;
    cin >> size;
    vector<string> vec(size);

    for (int i = 0; i < size; i++)
    {
        string temp;
        cin >> temp;
        vec[i] = temp;
    }

    string ans = longestCommonPrefix(vec);
    cout << ans << '\n';
}