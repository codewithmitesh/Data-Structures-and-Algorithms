/**
 * @file HoareQuickSort.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2021-12-03
 *
 * @copyright Copyright (c) 2021
 *s
 */

#include <bits/stdc++.h>
using namespace std;

// Tc :- O(N) , AS:- O(1) Most Efficient
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

        if (j <= i)
            return j;
        swap(arr[i], arr[j]);
    }
}
// TC :- O(nlogn) As:- O(1)
void QuickSort(int arr[], int low, int high)
{

    if (high > low)
    {
        int ind = HoarePartition(arr, low, high);
        QuickSort(arr, low, ind);
        QuickSort(arr, ind + 1, high);
    }
}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    QuickSort(arr, 0, n - 1);

    for (int x : arr)
        cout << x << " ";
}
