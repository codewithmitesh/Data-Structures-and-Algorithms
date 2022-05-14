/**
 * @file Subsetsum.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-14
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
void subsetSumgenerate(int ind, int currSum, vector<int> &ans, int N, vector<int> &arr)
{
    // Subset means Subsequences so i == N return
    if (ind == N)
    {
        ans.push_back(currSum);
        return;
    }
    // pick i th element in subset
    subsetSumgenerate(ind + 1, currSum + arr[ind], ans, N, arr);
    // if ith Element is nor picked in subset still  we will go to next index but we will not add in in sum
    subsetSumgenerate(ind + 1, currSum, ans, N, arr);
}

vector<int> subsetSums(vector<int> arr, int N)
{

    vector<int> ans;
    subsetSumgenerate(0, 0, ans, N, arr);

    sort(ans.begin(), ans.end());

    return ans;
}
*/