/**
 * @file FirstandLastOccurence.cpp
 * @author codewithmitesh (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief Code For First Occurence 
 * !Using the Binary search algo finding the first occurence in O(logn)
 */

int firstOcc(int arr[], int n, int x)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (x > arr[mid])
            low = mid + 1;

        else if (x < arr[mid])
            high = mid - 1;

        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;

            else
                high = mid - 1;
        }
    }

    return -1;
}
/**
 * @brief Code for last Occurence :-
 * !Using the Binary search algo finding the Last occurence in O(logn)
 */
int lastOcc(int arr[], int n, int x)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (x > arr[mid])
            low = mid + 1;

        else if (x < arr[mid])
            high = mid - 1;

        else
        {
            if (mid == n - 1 || arr[mid + 1] != arr[mid])
                return mid;

            else
                low = mid + 1;
        }
    }

    return -1;
}
/**
 * @brief Finding the first and last occurence using inbuilt function lower_bound and upper_bound 
 *
 * Problem Link :- https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
 *
vector<int> find(int arr[], int n, int x)
{

    vector<int> res;
    if (binary_search(arr, arr + n, x))
    {
        int first_occurence = lower_bound(arr, arr + n, x) - arr;
        res.push_back(first_occurence);

        int ind = upper_bound(arr, arr + n, x) - arr;
        ind--;
        res.push_back(ind);
    }
    else
    {
        res.push_back(-1);
        res.push_back(-1);
    }
    return res;
}
*/