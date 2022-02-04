/**
 * @file SmallestDistictWindow.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2021-12-12
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <bits/stdc++.h>
using namespace std;
// Hard level Quetion O(n)TC and O(n)Auxilary space
string smallestWindowSize(string &str)
{

    int start = 0;
    int curr_length = 0, res = INT_MAX;
    int counter = 0, noofDistinct = 0;

    unordered_map<char, int> ump;
    for (int i = 0; i < str.length(); i++)
    {
        if (ump.find(str[i]) != ump.end())
        {
            ump[str[i]]++;
        }
        else
        {
            ump[str[i]]++;
            noofDistinct++;
        }
    }

    ump.clear();

    for (int end = 0; end < str.length(); end++)
    {

        if (ump.find(str[end]) != ump.end())
        {
            ump[str[end]]++;
        }
        else
        {
            ump[str[end]]++;
            counter++;
        }
        if (counter == noofDistinct)
        {

            while (ump[str[start]] > 1)
            {
                ump[str[start]]--;
                start++;
            }
            curr_length = end - start + 1;
            res = min(res, curr_length);
        }
    }
    return str.substr(start, res);
}

int main()
{
    string str;
    str = "GEEKSGEEKSFOR";
    // cin >> str;
    cout << smallestWindowSize(str);

    return 0;
}