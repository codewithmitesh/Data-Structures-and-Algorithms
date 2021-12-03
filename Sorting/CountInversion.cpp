#include <bits/stdc++.h>
using namespace std;
#define ll long long;
// TC = theta(n) && AS = theta(n);

long long countAndMerge(int arr[], int l, int mid, int r)
{
    long long inv = 0;
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;

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
            inv += n1 - i;
        }
    }

    while (i < n1)
    {
        arr[k] = left[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = right[j];
        k++;
        j++;
    }
    return inv;
}

// O(nlogn)  As:- O(n)
long long countInversion(int arr[], int l, int r)
{
    long long inv = 0;
    if (r > l)
    {
        int mid = l + (r - l) / 2;
        inv += countInversion(arr, l, mid);
        inv += countInversion(arr, mid + 1, r);

        inv += countAndMerge(arr, l, mid, r);
    }
    return inv;
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
    int res = 0;

    res = countInversion(arr, 0, n - 1);
    cout << "Inversion is :-" << res << "\n";
    // Printitng Sorted array
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
