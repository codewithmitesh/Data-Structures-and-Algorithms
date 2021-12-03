/**
 * @file LomutoPartition.cpp
 * @author your name (you@domain.com)
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
void LomutoPartition(int arr[], int low, int high)
{

    int i = -1, j = 0;

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
}

int main()
{

    int arr[] = {5, 13, 6, 8, 12, 11, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    LomutoPartition(arr, 0, n - 1);

    for (int x : arr)
        cout << x << " ";
}
