/**
 * @file LIS.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-10-19
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
int solve(int ind, int prevInd, vector<int> &nums, vector<vector<int>> &dp)
{

    // base case when the array gets empty then simply retun anything by using which we dont get result like 0 or INT_MIN
    if (ind == nums.size())
        return 0;
    // due to we cant update or access -1 index in array we are simple doing coordinate shifting by 1 so every prevInd is written as prevInd + 1

    if (dp[ind][prevInd + 1] != -1)
        return dp[ind][prevInd + 1];
    // subsequence hence take and not take cases

    // not take case is here but we need to return len so
    int len = 0 + solve(ind + 1, prevInd, nums, dp);
    // if we have no previous index OR the value of prevInd is less than value of the current index then only we can take
    if (prevInd == -1 || nums[prevInd] < nums[ind])
    {
        int take = 1 + solve(ind + 1, ind, nums, dp);
        len = max(take, len);
    }
    return dp[ind][prevInd + 1] = len;
}

int lengthOfLIS(vector<int> &nums)
{
    // create dp array :-
    int n = nums.size();
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    return solve(0, -1, nums, dp);
}
*/