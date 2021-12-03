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

    cout << "Bubble Sort\n";

    // Bubble Sort is Stable and also inPlace

    //    we are considering itterations as obase indexing

    for (int i = 0; i < n - 1; i++)
    {
        // if Our Array is Sorted or it becomes sorted between the sorting we do not need to do any further iteration or work.
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        { // here -1 is due to 0 base indexing

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }

    // Printitng Sorted array
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}