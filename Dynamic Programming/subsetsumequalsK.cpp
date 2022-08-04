/**
 * @file subsetsumequalsK.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-19
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool subsetSumUtil(int ind, int target, vector<int> &arr, vector < vector<int>)
{
    if (target == 0)
        return true;
    if (ind == 0)
        return arr[0] == target;
    if (dp[ind][target] != ‐1)
        return dp[ind][target];
    bool notTaken = subsetSumUtil(ind‐1, target, arr, dp);
    bool taken = false;
    if (arr[ind] <= target)
        taken = subsetSumUtil(ind‐1, target‐arr[ind], arr, dp);
    return dp[ind][target] = notTaken || taken;
}
bool subsetSumToK(int n, int k, vector<int> &arr)
{
    vector<vector<int>> dp(n, vector<int>(k + 1,‐1));
    return subsetSumUtil(n‐1, k, arr, dp);
}
*/