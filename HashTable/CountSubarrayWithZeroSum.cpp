/**
 * @file CountSubarrayWithZeroSum.cpp
 * @author codewithmitesh (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-27
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 * ! Problem Link :- https://www.geeksforgeeks.org/print-all-subarrays-with-0-sum/
 * * Solution :- 
ll findSubarray(vector<ll> arr, int n)
{
    unordered_map<int, int> ump;
    int pre_sum = 0;
    int res = 0;
    ump[0] = 1;
    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];
        if (ump.find(pre_sum) != ump.end())
        {
            res = res + ump[pre_sum];
            ump[pre_sum]++;
        }
        else
        {
            ump[pre_sum] = 1;
        }
    }

    return res;
}
 * 
 * 
 */
