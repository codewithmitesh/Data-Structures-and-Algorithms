/**
 * @file HeapSort.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-04-10
 *
 * @copyright Copyright (c) 2022
 *
 *  *  TC :- O(NLogN)
 */
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    while (1)
    {
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if (l < n && arr[l] > arr[largest])
            largest = l;

        if (r < n && arr[r] > arr[largest])
            largest = r;

        if (largest != i)
        {
            swap(arr[i], arr[largest]);
            i = largest;
        }
        else
        {
            break;
        }
    }
}

void buildheap(int arr[], int n)
{
    for (int i = (n - 2) / 2; i >= 0; i--)
        heapify(arr, n, i);
}
// * Heap Sort Function
void heapSort(int arr[], int n)
{
    // Building the HEap // O(N)
    buildheap(arr, n);
    // Swappint max wiht last element and Heapify the root or 0th element
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        // Here we dont heapify the sorted elements for that we are passing i as a size for heapify
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);
}
