/**
 * @file CountTripletwithsumSmallerthanX.cpp
 * @author codewithmitesh (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-26
 * 
 * @copyright Copyright (c) 2021
 * 
 * Problem Link :-  https://www.geeksforgeeks.org/count-triplets-with-sum-smaller-that-a-given-value/
 
 Solution :- 

long long countTriplets(long long arr[], int n, long long sum)
{
    sort(arr, arr + n);
    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            long long s = arr[i] + arr[j] + arr[k];
            if (s < sum)
            {
                count = count + (k - j);
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return count;
}
 */
