#include <bits/stdc++.h>
using namespace std;
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

    cout << "Insertion Sort\n";

    for (int i = 1; i < n; i++)
    {

        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    // Printitng Sorted array
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}