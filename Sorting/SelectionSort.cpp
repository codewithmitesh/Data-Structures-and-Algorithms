#include <bits/stdc++.h>
using namespace std;
int main()
{

    int size = 0;
    cout << "Enter thew size of the Array\n";
    cin >> size;
    int arr[size];
    cout << "Enter the the Array\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Selection Sort\n";

    for (int i = 0; i < size - 1; ++i)
    {
        int minimum_index = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j] < arr[minimum_index])
                minimum_index = j;
        }
        swap(arr[minimum_index], arr[i]);
    }

    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }    

    return 0;
}