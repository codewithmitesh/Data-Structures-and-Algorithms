/**
 * @file ProductPuzzleArray.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-04
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
{

    vector<long long int> ans;

    long long int left[n];
    long long int right[n];

    left[0] = 1, right[n - 1] = 1;

    for (int i = 1; i < n; i++)
    {
        left[i] = left[i - 1] * nums[i - 1];
    }

    for (int i = n - 2; i >= 0; --i)
    {
        right[i] = right[i + 1] * nums[i + 1];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(left[i] * right[i] * 1LL);
    }

    return ans;
}

int main()
{

    int n = 0; // n is size of the array
    cout << "Enter thew size of the Array\n";
    cin >> n;

    vector<long long int> nums;
    vector<long long int> res;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    res = productExceptSelf(nums, n);
    cout << "\n";
    for (auto it : res)
    {
        cout << it << " ";
    }

    return 0;
}