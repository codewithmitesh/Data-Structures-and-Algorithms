/**
 * @file ShortestDistancetoTargetStringIncircularArrays.cpp
 * @ Mitesh tank
 * @brief
 * @version 0.1
 * @date 2022-12-25
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
class Solution
{
public:
    int closetTarget(vector<string> &words, string target, int startIndex)
    {
        int n = words.size();
        int ans = n;
        int steps = 1;

        int i = (startIndex + 1) % n;
        for (; i != startIndex; i++)
        {
            // cout<<"chala";

            if (words[i] == target && i != startIndex)
            {
                cout << "chala" << ans;
                ans = min(ans, steps);
            }
            steps++;
        }
        cout << "Chgala";
        steps = 1;
        i = (startIndex - 1 + n) % n;
        for (; i != startIndex; i--)
        {
            if (words[i] == target && i != startIndex)
            {
                ans = min(ans, steps);
            }
            steps++;
        }
        cout << "Chgala";

        if (ans == words.size())
        {
            return -1;
        }
        else
        {
            return ans;
        }
    }
};