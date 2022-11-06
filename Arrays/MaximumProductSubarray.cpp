/**
 * @file MaximumProductSubarray.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-11-04
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
long long maxProduct(vector<int> arr, int n)
{

    long long maxTill = INT_MIN, currentMax = 1;
    //   int n = arr.size();
    // traverse from left to right and find the maxtillnow
    for (int i = 0; i < n; i++)
    {
        currentMax *= arr[i];
        maxTill = max(maxTill, currentMax);

        // if currentMax becomes 0 reset to 1 because 0 ka multiple always 0 hi aayega
        if (currentMax == 0)
        {
            currentMax = 1;
        }
    }
    // Update the currentMax to 1 agasin for reverese traversal
    currentMax = 1;
    // from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        currentMax *= arr[i];
        maxTill = max(maxTill, currentMax);
        // if currentMax becomes 0 rest to 1
        if (currentMax == 0)
        {
            currentMax = 1;
        }
    }

    return maxTill;
}
*/