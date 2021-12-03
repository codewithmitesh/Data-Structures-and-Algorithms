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

// For Lomuto Last Element is Always Pivot Element
int LomutoPartition(int arr[], int low, int high)
{

    int i = low - 1, j = low;

    long long pivotElement = arr[high];

    while (j < high)
    {

        if (arr[j] < pivotElement)
        {
            i++;
            swap(arr[j], arr[i]);
        }

        j++;
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void LomutoQuickSort(int arr[], int low, int high)
{

    if (high > low)
    {

        int ind = LomutoPartition(arr, low, high);
        LomutoQuickSort(arr, low, ind - 1);
        LomutoQuickSort(arr, ind + 1, high);
    }
}

int main()
{

    // int arr[] = {5, 13, 6, 8, 12, 11, 9};
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int n = sizeof(arr) / sizeof(arr[0]);

    LomutoQuickSort(arr, 0, n - 1);

    for (int x : arr)
        cout << x << " ";
}
   