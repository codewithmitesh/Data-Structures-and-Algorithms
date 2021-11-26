/**
 * @file MissinAndRepetingElement.cpp
 * @author codewithmitesh (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-26
 * 
 * @copyright Copyright (c) 2021
 * 
 * Problem Link :: - https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/
 * 
 * Solution :- 
int *findTwoElement(int *arr, int n)
{

    int a, b;

    for (int i = 0; i < n; i++)
    {

        if (arr[abs(arr[i]) - 1] > 0)
        {

            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        }
        else
        {
            a = abs(arr[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            b = i + 1;
            break;
        }
    }

    int *ans = new int[2];
    ans[0] = a;
    ans[1] = b;
    return ans;
}
 */
