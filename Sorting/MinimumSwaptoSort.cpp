/**
 * @file ProductPuzzleArray.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-04
 *
 * PRoblem Link:- https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/
 * 
 * @copyright Copyright (c) 2021
 *
 */

#include <bits/stdc++.h>
using namespace std;

int minSwaps(vector<int> &nums)
{

    int swapCount = 0;
    unordered_map<int, int> ump;

    for (int i = 0; i < nums.size(); i++)
    {
        ump[nums[i]] = i;
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (ump[nums[i]] != i)
        {
            swapCount++;
            swap(nums[i], nums[ump[nums[i]]]);
            i--;
        }
    }
    return swapCount;
}

int main()
{

    int n = 0; // n is size of the array
    cout << "Enter thew size of the Array\n";
    cin >> n;

    vector<int> nums;
    // vector<long long int> res;
    int res;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    res = minSwaps(nums);
    cout << "\n";

    cout << "Minimum Swap:- " << res << "\n";

    // for (auto it : res)
    // {
    //     cout << it << " ";
    // }

    return 0;
}