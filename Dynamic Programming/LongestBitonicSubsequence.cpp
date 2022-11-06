/**
 * @file LongestBitonicSubsequence.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-10-29
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int LongestBitonicSequence(vector<int> nums)
{
    int n = nums.size();
    // Write your code here.
    vector<int> dp1(n, 1);
    vector<int> dp2(n, 1);
    // create left to right lis dp array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] > nums[j] && dp1[j] + 1 > dp1[i])
            {
                dp1[i] = dp1[j] + 1;
            }
        }
    }
    // creating right to left LIS DP array
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (nums[i] > nums[j] && dp2[j] + 1 > dp2[i])
            {
                dp2[i] = dp2[j] + 1;
            }
        }
    }
    // Ans will dp1 + dp2 -1
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        int x = dp1[i] + dp2[i] - 1;
        ans = max(ans, x);
    }
    return ans;
}
*/