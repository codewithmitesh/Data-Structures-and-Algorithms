/**
 * @file AllocatePages.cpp
 * @author codewithmitesh (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-27
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 * !Problem Link :- https://www.geeksforgeeks.org/allocate-minimum-number-pages/
 * *Solution  :-
int findPages(int A[], int N, int M)
{

    if (M > N)
        return -1;

    int low = A[0];
    int res = -1;
    int high = 0;
    for (int i = 0; i < N; i++)
    {
        high += A[i];
        low = min(low, A[i]);
    }


    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isAllocationPossible(A, N, mid, M))
        {
            res = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return low;
}

bool isAllocationPossible(int A[], int N, int barrier, int K)
{

    int AllocatedStudents = 1, AllocatedPages = 0;
    for (int i = 0; i < N; i++)
    {

        if (AllocatedPages + A[i] > barrier)
        {
            AllocatedStudents++;
            AllocatedPages = A[i];
            if (AllocatedPages > barrier)
                return false;
        }
        else
        {
            AllocatedPages += A[i];
        }
    }
    if (AllocatedStudents > K)
    {
        return false;
    }
    else
    {
        return true;
    }
}
 * 
 */
