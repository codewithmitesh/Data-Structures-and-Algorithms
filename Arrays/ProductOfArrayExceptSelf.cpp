/**
 * @file ProductOfArrayExceptSelf.cpp
 * @author Mitesh tank()
 * @brief
 * @version 0.1
 * @date 2022-12-21
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();

    vector<int> ans(nums.size(), 1);

    // traverse left ot right
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }
    int currpro = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        currpro = currpro * nums[i + 1];
        ans[i] *= currpro;
    }
    return ans;
}
*/