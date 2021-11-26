/**
 * @file MajorityElement.cpp
 * @author codewithmitesh (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-26
 * 
 * @copyright Copyright (c) 2021
 * 
 * Problem Link :- 
 * 
 * Solution :- Morres Voting Algorithm :
 * 
 int majorityElement(int a[], int size)
{

    //   3 1 3 3 2

    int res = 1, curr = 0;

    for (int i = 1; i < size; i++)
    {
        if (a[i] == a[curr])
        {
            res++;
        }
        else
        {
            res--;
        }
        if (res == 0)
        {
            curr = i;
            res = 1;
        }
    }

    // we will get the candidate as in current

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == a[curr])
            count++;
    }

    if (count > (size / 2))
    {
        return a[curr];
    }
    else
    {
        return -1;
    }
}
 * 
 */

int findMajorityElement(int arr[], int n)
{
    int res = 1, curr = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[curr])
        {
            res++;
        }
        else
        {
            res--;
        }
        if (res == 0)
        {
            curr = i;
            res = 1;
        }
    }

    // we will get the index of candidate as in current

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[curr])
            count++;
    }

    if (count > (n / 2))
    {
        return arr[curr];
    }
    else
    {
        return -1;
    }
}