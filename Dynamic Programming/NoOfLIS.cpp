/**
 * @file NoOfLIS.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-10-29
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int findNumberOfLIS(vector<int> &nums)
{
    int n = nums.size(), maxi = 1;
    vector<int> dp(n, 1), cnt(n, 1);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {

            if (nums[j] < nums[i] && dp[j] + 1 > dp[i])
            {
                dp[i] = dp[j] + 1;
                // if it is not the same then just same the cnt
                cnt[i] = cnt[j];
            }
            else if (nums[j] < nums[i] && dp[i] == dp[j] + 1)
            {
                // if the dp is same then increade the count by the count
                cnt[i] += cnt[j];
            }
        }

        maxi = max(maxi, dp[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (dp[i] == maxi)
        {
            ans += cnt[i];
        }
    }
    return ans;
}
*/