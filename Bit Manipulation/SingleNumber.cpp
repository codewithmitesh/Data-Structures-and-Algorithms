/**
 * @file SingleNumber.cpp
 * @author Mitesh Tank  (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-12-20
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
int singleNumber(vector<int> &arr)
{
    int n = arr.size(); // extracting the size of the array

    // traverse from the array
    for (int i = 0; i < n - 1; i++)
    {
        arr[i + 1] = arr[i] ^ arr[i + 1]; // (prev answer xor current index)
    }

    return arr[n - 1]; // return left over element
}
*/