/**
 * @file ValidPartitionSubarray2369.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-07
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool validCheck(vector<int> &nums, vector<int> &dp, int i)
{

    if (i >= nums.size())
        return true;

    if (dp[i] != -1)
        return dp[i];

    // check for 1st condition if valid then check its remaining swubarrau recursively
    if (i + 1 < nums.size() && nums[i] == nums[i + 1])
    {

        if (validCheck(nums, dp, i + 2))
        {
            return true;
        }

        if (i + 2 < nums.size() && nums[i] == nums[i + 2])
        {
            if (validCheck(nums, dp, i + 3))
                return true;
        }
    }

    if (i + 2 < nums.size() && nums[i] == nums[i + 1] - 1 && nums[i] == nums[i + 2] - 2)
    {

        if (validCheck(nums, dp, i + 3))
            return true;
    }

    return dp[i] = false;
}
bool validPartition(vector<int> &nums)
{

    vector<int> dp(nums.size() + 1, -1);
    return validCheck(nums, dp, 0);
}
*/