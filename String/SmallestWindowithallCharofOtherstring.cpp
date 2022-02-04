/**
 * @file SmallestWindowithallCharofOtherstring.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-12
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <bits/stdc++.h>
using namespace std;
string SmallestWindow(string &s, string &p)
{
    unordered_map<char, int> ump;
    for (int i = 0; i < p.length(); i++)
    {
        ump[p[i]]++;
    }
    int counter = ump.size();
    int start = 0, end = 0, curr_length = 0, res = INT_MAX, first_index = 0;
    for (int end = 0; end < s.length(); end++)
    {
        if (ump.find(s[end]) != ump.end())
        {
            ump[s[end]]--;
            if (ump[s[end]] == 0)
            {
                counter--;
            }
        }
        if (counter == 0)
        {
            while (true)
            {
                if (ump.find(s[start]) != ump.end())
                {
                    if (ump[s[start]] != 0)
                    {
                        ump[s[start]]++;
                        start++;
                    }
                    else
                    {
                        curr_length = end - start + 1;
                        // to return first smallest window
                        if (curr_length < res)
                        {
                            res = curr_length;
                            first_index = start;
                        }
                        break;
                        // to return last occuring smallest window
                        // res = min(res, curr_length);
                        // break;
                    }
                }
                else
                {

                    start++;
                }
            }
        }
    }
    if (res == INT_MAX)
    {
        return "-1";
    }
    else
    {
        return s.substr(start, res);
    }
}

int main()
{
    string str, p;
    getline(std::cin, str);
    getline(std::cin, p);
    string res;
    res = SmallestWindow(str, p);
    cout << res << endl;
    return 0;
}