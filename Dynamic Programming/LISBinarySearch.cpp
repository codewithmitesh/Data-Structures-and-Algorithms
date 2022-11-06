/**
 * @file LISBinarySearch.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-10-28
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int lengthOfLIS(vector<int> &nums)
{
    vector<int> temp;
    // insert the 0th index element
    temp.push_back(nums[0]);
    int len = 1; // atleast one toh hoga hi size
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > temp.back())
        {
            temp.push_back(nums[i]);
            len++;
        }
        else
        {
            int index = lower_bound(temp.begin(), temp.end(), nums[i]) - temp.begin();
            temp[index] = nums[i];
        }
    }

    return len;
}