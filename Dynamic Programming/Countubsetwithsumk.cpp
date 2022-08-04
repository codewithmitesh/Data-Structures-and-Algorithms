/**
 * @file Countubsetwithsumk.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-20
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int findWaysUtil(int ind, int target, vector<int> &arr, vector<vector<int>> &dp)
{

    if (target == 0)
        return 1;
    if (ind == 0)
        return arr[0] == target;
    if (dp[ind][target] !=‐1)
        return dp[ind][target];
    int notTaken = findWaysUtil(ind‐1, target, arr, dp);
    int taken = 0;
    if (arr[ind] <= target)
        taken = findWaysUtil(ind‐1, target‐arr[ind], arr, dp);
    return dp[ind][target] = notTaken + taken;
}

int findWays(vector<int> &num, int k)
{
    int n = num.size();
    vector<vector<int>> dp(n, vector<int>(k + 1,‐1));
    return findWaysUtil(n‐1, k, num, dp);
}
*/

// if NO ASCII error aave toh - ne fari - karvu karvu codeeditor of website naa
