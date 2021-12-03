/**
 * @file NaivePartition.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2021-12-03
 *
 * @copyright Copyright (c) 2021
 *
 */
// Tc :- O(N) , AS:- O(N)

// Naive Partition :-
#include <bits/stdc++.h>
using namespace std;

void NaivePartition(int arr[], int low, int high, int pivot)
{

    int n = high - low + 1;
    int temp[n], index = 0;
    int pivotElement = arr[pivot];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < pivotElement)
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == pivotElement)
        {
            temp[index] = arr[i];
            index++;
        }
    }

    int lastOccureceofPivot = index - 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > pivotElement)
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
int main() {
	
    int arr[]={5,13,6,9,12,11,8};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	NaivePartition(arr,0,n-1,3); 
	
	for(int x: arr)
	    cout<<x<<" ";
}
