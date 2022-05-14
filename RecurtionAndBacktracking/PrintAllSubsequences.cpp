/**
 * @file PrintAllSubsequences.cpp
 * @author Mitesh tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-13
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;

void PrintAllSubsequences(vector<int> &arr, int i, vector<int> &temp)
{

    if (i >= arr.size())
    {
        for (auto it : temp)
        {
            cout << it << " ";
        }
        cout << '\n';
        return;
    }

    temp.push_back(arr[i]); // include current i
    PrintAllSubsequences(arr, i + 1, temp);

    temp.pop_back(); // Not include current i
    PrintAllSubsequences(arr, i + 1, temp);
}

int main()
{

    vector<int> arr = {3, 1, 2};

    vector<int> temp;
    PrintAllSubsequences(arr, 0, temp);

    return 0;
}