/**
 * @file ImplementHeapDS.cpp
 * @author  Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-04-08
 *
 * @copyright Copyright (c) 2022
 *
 * * We need to implement the Head Data structure
 */

#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
    int *arr;
    int size;
    int capacity;

public:
    MinHeap(int c)
    {
        size = 0;
        capacity = c;
        // creating the array of capacity c
        arr = new int[c];
    }

    int getLeft(int i) { return (2 * i + 1); }
    int getRight(int i) { return (2 * i + 2); }
    int getParent(int i) { return (i - 1) / 2; }
    void insert(int x)
    {
        if (size == capacity)
            return;
        size++;
        arr[size - 1] = x;
        int i = size - 1;

        while (i != 0 && arr[getParent(i)] > arr[i])
        {
            swap(arr[i], arr[getParent(i)]);
            i = getParent(i);
        }
    }
    void minHeapify(int i)
    {
        while (1)
        {
            int lt = getLeft(i);
            int rt = getRight(i);
            int smallest = i;
            if (lt < size && arr[lt] < arr[i])
            {
                smallest = lt;
            }
            if (rt < size && arr[rt] < arr[smallest])
            {
                smallest = rt;
            }
            if (smallest != i)
            {
                swap(arr[i], arr[smallest]);
            }
            else
            {
                break;
            }
        }
    }
    int extractMin()
    {
        // if heap is empty then we will simply return infinity
        if (size <= 0)
            return INT_MAX;

        // *  we are hadeling size==1 case explicitly because we are doing size-- therefor size will be 0 and we will be calling heapify on empty heap which will throw an error

        if (size == 1)
        {
            size--;
            return arr[0];
        }

        swap(arr[0], arr[size - 1]);
        size--;
        minHeapify(0);

        return arr[size];
    }
    void decreaseKey(int i, int x)
    {
        arr[i] = x;
        while (i != 0 && arr[getParent(i)] > arr[i])
        {
            swap(arr[i], arr[getParent(i)]);
            i = getParent(i);
        }
    }

    void deleteKey(int i)
    {
        if (i >= size || size <= 0)
            return;
        decreaseKey(i, INT_MIN);
        extractMin();
    }

    void buildHeap()
    {
        for (int i = (size - 2) / 2; i >= 0; i--)
            minHeapify(i);
    }
};

int main()
{
    MinHeap h(11);
    h.insert(3);
    h.insert(2);
    h.insert(15);
    h.insert(20);
    cout << h.extractMin() << endl;
    return 0;
}
