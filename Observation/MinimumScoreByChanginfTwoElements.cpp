/**
 * @file MinimumScoreByChanginfTwoElements.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-28
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int minimizeSum(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        int n = nums.size();
        return min((nums[n - 2] - nums[1]), min((nums[n - 1] - nums[2]), nums[n - 3] - nums[0]));
    }
};