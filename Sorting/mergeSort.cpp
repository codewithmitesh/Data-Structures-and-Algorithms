#include <bits/stdc++.h>
using namespace std;

// TC = theta(n) && AS = theta(n);
void merge(int arr[], int low, int mid, int high)
{

    int n1 = mid - low + 1, n2 = high - mid;
    int left[n1], right[n2];

    // it is not necessarythat low is always zero and high is always n.
    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for (int i = 0; i < n2; i++)
        right[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// O(nlogn)  As:- O(n)
void mergeSort(int arr[], int l, int r)
{
    // COndition of there should be atleast 2 element to perform sort we cannot sort one element bcz it is already sorted this is the base condition of recurtion
    if (r > l)
    {

        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{

    int n = 0; // n is size of the array
    cout << "Enter thew size of the Array\n";
    cin >> n;
    int arr[n];
    cout << "Enter the the Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Merge Sort\n";

    mergeSort(arr, 0, n - 1);

    // Printitng Sorted array
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}