/**
 * @file MaximumSumOfThreeNumbers.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-05
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int maximumProduct(vector<int> &nums)
{

    sort(nums.begin(), nums.end());

    int n = nums.size();
    int z = n - 1;

    int y = n - 2, x = n - 3, a = 0, b = 1;

    return max((nums[z] * nums[y] * nums[x]), (nums[a] * nums[b] * nums[z]));
}
*/