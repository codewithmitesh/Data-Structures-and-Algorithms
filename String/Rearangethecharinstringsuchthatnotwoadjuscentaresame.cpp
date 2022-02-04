/**
 * @file Rearangethecharinstringsuchthatnotwoadjuscentaresame.cpp

 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-16
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <bits/stdc++.h>
using namespace std;

char getMaxCountChar(const vector<int> &count)
{
    int max = 0;
    char ch;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            ch = 'a' + i;
        }
    }

    return ch;
}
string rearrangeString(string S)
{

    int n = S.size();
    // if string is empty return it.
    if (!n)
        return "";

    // Creating the vector of size 26 (all small characters with initialization with zero)
    vector<int> count(26, 0);
    // Counting the no of Occurence of characters in vector
    for (auto ch : S)
        count[ch - 'a']++;

    // finding the maximum count
    char ch_max = getMaxCountChar(count);
    int maxCount = count[ch_max - 'a'];

    // check if the result is possible or not
    // if maxcount is more than (n+1)/2 then we cant find the answer
    if (maxCount > (n + 1) / 2)
        return "";
    // declaring the empty string of size n
    string res(n, ' ');

    int ind = 0;
    // filling the most frequently occurring char in the even
    // indices
    while (maxCount)
    {
        res[ind] = ch_max;
        ind = ind + 2;
        maxCount--;
    }
    count[ch_max - 'a'] = 0;

    // now filling the other Chars, first filling the even
    // positions and then the odd positions
    for (int i = 0; i < 26; i++)
    {
        while (count[i] > 0)
        {
            ind = (ind >= n) ? 1 : ind;
            res[ind] = 'a' + i;
            ind += 2;
            count[i]--;
        }
    }
    return res;
}

int main()
{
    string str = "bbbaa";
    string res = rearrangeString(str);
    if (res == "")
        cout << "Not valid string" << endl;
    else
        cout << res << endl;

    return 0;
}