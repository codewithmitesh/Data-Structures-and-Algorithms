/**
 * @file SortbySetbit.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-05
 *
 * @copyright Copyright (c) 2021
 *
 * PRoblem Link:- https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/
 */
#include <bits/stdc++.h>
using namespace std;

void sortBySetBitCount(int arr[], int n)
{
    // stable_sort to sort in stable order with comparator function
    stable_sort(arr, arr + n, comparator);
}
// comparator function to sort by count of set bit in array
static bool comparator(int a, int b)
{
    return __builtin_popcount(a) > __builtin_popcount(b);
}

int main()
{

    int n = 0; // n is size of the array
    cout << "Enter thew size of the Array\n";
    cin >> n;

    // vector<int> nums;
    // vector<long long int> res;
    // int res;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     int temp;
    //     cin >> temp;
    //     nums.push_back(temp);
    // }

    sortBySetBitCount(arr, n);
    cout << "\n";

    // cout << "Minimum Swap:- " << res << "\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // for (auto it : res)
    // {
    //     cout << it << " ";
    // }

    return 0;
}