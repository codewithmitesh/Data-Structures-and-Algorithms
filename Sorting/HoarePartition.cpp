/**
 * @file LomutoPartition.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2021-12-03
 *
 * @copyright Copyright (c) 2021
 *
 */

// Tc :- O(N) , AS:- O(1)

// Lomuto Partition :-
#include <bits/stdc++.h>
using namespace std;

// For Hoare first Element is Always Pivot Element
int HoarePartition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low - 1, j = high + 1;

    while (true)
    {

        do
        {
            i++;
        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (j<=i)
            return j;
        swap(arr[i],arr[j]);
    }
}

int main()
{

    int arr[] = {10, 13, 6, 8, 12, 11, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    int res = HoarePartition(arr, 0, n - 1);
    cout << res << "\n";

    for (int x : arr)
        cout << x << " ";
}
