/**
 * @file CheckifitisValidSuffleorNot.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-08
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <bits/stdc++.h>
using namespace std;
bool isValidSuffle(string &str1, string &str2, string &res)
{
    int l1 = str1.length();
    int l2 = str2.length();
    int lResult = res.length();

    if (l1 + l2 != lResult)
    {
        return false;
    }

    int i = 0, j = 0, k = 0;
    bool flag = 0;

    while (k < lResult)
    {

        if (i < l1 && str1[i] == res[k])
        {
            i++;
        }
        else if (j < l2 && str2[j] == res[k])
        {
            j++;
        }
        else
        {
            flag = 1;
            break;
        }

        k++;
    }

    if (i < l1 || j < l2)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{

    cout << "Enter the Text String 1 :- \n";
    string str1;
    cin >> str1;
    cout << "Enter the Text String 2 :- \n";
    string str2;
    cin >> str2;
    cout << "Enter the Resultant String :- \n";
    string res;
    cin >> res;

    cout << "Searching :---------------------------\n";
    bool flag = isValidSuffle(str1, str2, res);
    if (flag == 0)
    {
        cout << "it is not a valid string ";
    }
    else
    {
        cout << "it is the a valid string ";
    }

    return 0;
}