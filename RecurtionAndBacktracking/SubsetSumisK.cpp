/**
 * @file SubsetSumisK.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-14
 *
 * @copyright Copyright (c) 2022
 *
 */
/** This can be Futher Optimized Using Dynamic Programming
bool subsetsum(int ind, int currSum, int &sum, vector<int> &arr)
{

    if (ind == arr.size())
    {

        if (currSum == sum)
        {

            return true;
        }
        return false;
    }

    // pick the current element in to the subset

    if (subsetsum(ind + 1, currSum + arr[ind], sum, arr) == true)
        return true;

    // not pick the current element in to the suset

    if (subsetsum(ind + 1, currSum, sum, arr) == true)
        return true;

    return false;
}
bool isSubsetSum(vector<int> arr, int sum)
{

    return subsetsum(0, 0, sum, arr);
}
*/