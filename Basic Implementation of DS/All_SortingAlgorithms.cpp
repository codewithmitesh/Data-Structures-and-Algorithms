

#include <bits/stdc++.h>
using namespace std;

// Selection Sort
// sab ko line me khada karo and jo sabse chhota hai usko sabse swap karo

void SelectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min = INT_MAX;
        int swapInd = 0;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < min)
            {
                swapInd = j;
                min = arr[j];
            }
        }

        swap(arr[swapInd], arr[i]);
    }
}

// Insertion Sort

// Insert an element to its correct position
// means current element se sab chhote uske left me and current elm se bade sab uske right me
// 1se start karenge while maintaining it current and if current is less than the current-1 index ke jo hoga [ie. j ] then swap karte rahenge jab tak woh sahi position pe nahi pahoch jaata

// card game me imagine karo
// simple ki jo chhota hai toh simple usko nikal liya(curr) thodi der bhr fir jo jo isse bade hai unko right shift karte gaye tab tak isse chhota nahi aaja fir,isse chhote wale ke baad isko(curr) rakh diya
void InsertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        // card ko bhr nikal diya
        int curr = arr[i];
        // card se bado ko right shift karna
        int j = i - 1;
        while (j >= 0 && curr < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }
}

// Bubble Sort
// Repeatatly swap the adjacent elements if they are in wrong order
// repeatatly swap karte rehne se jo bhi bada element hoga woh simple bubbled hoke last me aajja yega simply
// also hame n-1 iterations karni padegi
void BubbleSort(vector<int> &arr)
{
    int n = arr.size();
    int i = 1;
    while (i < n)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j + 1] < arr[j]) // > karne se decending
                swap(arr[j + 1], arr[j]);
        }
        i++;
    }
}

// Merge Sort :-
// Devide and Conqure
// Simple dono part ko dusre array me store karlo and then dono array ko merge algo with updation in real array
// donot forgot to maintain the start because it is ho sakta ki array ke bich me se hi sort karna ho

void Merge(vector<int> &arr, int start, int mid, int end)
{

    int n1 = mid - start + 1;
    int n2 = end - mid;
    int v1[n1];
    int v2[n2];
    for (int i = 0; i <= n1; i++)
    {
        v1[i] = arr[start + i];
    }

    for (int i = 0; i < n2; i++)
    {
        v2[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = start;
    while (i < n1 && j < n2)
    {
        if (v1[i] <= v2[j])
        {
            arr[k] = v1[i];
            i++;
        }
        else
        {
            arr[k] = v2[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = v1[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = v2[j];
        k++;
        j++;
    }
}

void MergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        // cout << "run";

        int mid = (start + end) / 2;
        MergeSort(arr, start, mid);
        MergeSort(arr, mid + 1, end);
        Merge(arr, start, mid, end);
    }
}

// Quick SOrt partition
// simple hai last wale ko pivor leke
// Simple traver karna hai and pivot ko apni real position pe update karna
// Also uske liye traver karo while maintaing last smaller elemet and agar smaller aata toh increment karke simple update karo
int partition(vector<int> &arr, int start, int end)
{
    int pivotEle = arr[end];
    // pointer to the last smallest element
    int i = start - 1; // initially

    for (int j = start; j <= end - 1; j++)
    {
        if (arr[j] < pivotEle)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1;
}
void QuickSortImp(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int pivot = partition(arr, start, end);
        QuickSortImp(arr, start, pivot - 1);
        QuickSortImp(arr, pivot + 1, end);
    }
}

// heap sort:-
// Complete Binary Tree means all level comletely fills except last and woh bhi left to right hi fill hona chahiye
// to get left chaild :- 2*i+1 , right Child :- 2*i+2 ,  to get parent - (i-1)/2;
// yaha pe hum max heap use karte hai simple max heap bana ke jo maximum ele hai usko last wale element se swap karke size ko kam karke simple wapas same cheez karte rahenge

// heapify matlab ek level pe hi niche niche jaana hai aur jaha se start krre wahi subtree ko hame hame pura heapify karna hai niche tak left right kuch nahi jaana ,, also hame tab rukna hai tab hamara current hi left and right se bada hai

void heapify(vector<int> &arr, int n, int i)
{
    while (1)
    {
        // currentNode , left child and right child mese jo bhi bada hai usko current rakhna hai simple
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

void buildheap(vector<int> &arr, int n)
{
    // Bottom most right most inner node se top tak heapify call karte jana hai, means last element ke parent se start tak heapify call karn
    // last element n-1 then uska parent = (n-1-1)/2
    for (int i = (n - 2) / 2; i >= 0; i--)
        heapify(arr, n, i);
}
// * Heap Sort Function
void heapSort(vector<int> &arr, int n)
{
    // Building the HEap // O(N)
    buildheap(arr, n);
    // Swappint max wiht last element and Heapify the root or 0th element top element
    // heap sordt means simple max elem ko last se swap kardo and then simply top ke liye heapify call kardo
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        // Here we dont heapify the sorted elements for that we are passing i as a size for heapify
        heapify(arr, i, 0);
    }
}
int main()
{

    vector<int> arr = {5, 6, 81, 11, 6, 2, 88, 5, 0, -1, -6, 10};
    //-6 -1 0 2 5 5 6 6 10 11 81 88
    // SelectionSort(arr);
    // InsertionSort(arr);
    // BubbleSort(arr);

    // MergeSort(arr, 0, 11);
    // QuickSortImp(arr, 0, 11);
    heapSort(arr, arr.size());
    for (auto it : arr)
    {
        cout << it << " ";
    }
    // QuickSort(arr);
    x` return 0;
}
