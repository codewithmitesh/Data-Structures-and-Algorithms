/**
 * @file MaximuizeTheSumSelected.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-10-15
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 *
 *https://practice.geeksforgeeks.org/problems/maximize-the-sum-of-selected-numbers-from-an-array-to-make-it-empty0836/1
int maximizeSum(int a[], int n)
{
    // Complete the function
    int ans = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[a[i]] > 0)
        {
            mp[a[i]]--;
            ans += a[i];
            if (mp[a[i] - 1] > 0)
            {
                mp[a[i] - 1]--;
            }
        }
    }
    return ans;
}
*/