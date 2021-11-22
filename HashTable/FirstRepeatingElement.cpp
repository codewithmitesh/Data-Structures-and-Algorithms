/**
 * @file FirstRepeatingElement.cpp
 * @author codewithmitesh (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-19
 * 
 * @copyright Copyright (c) 2021
 * 
 * Problem Link :- https://www.geeksforgeeks.org/find-first-repeating-element-array-integers/
 */
// Solution:-  TC = O(N)  AS :- O(N)
/**
 
int firstRepeated(int arr[], int n)
{

    int res = -2;
    unordered_set<int> uns;
    for (int i = n - 1; i >= 0; i--)
    {

        if (uns.find(arr[i]) != uns.end())
        {
            res = i;
        }
        else
        {
            uns.insert(arr[i]);
        }
    }
    return res + 1;
}

*/