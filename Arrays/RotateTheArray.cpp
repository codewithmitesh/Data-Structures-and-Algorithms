/**
 * @file RotateTheArray.cpp
 * @author Mitesh Tank (Codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-12-19
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
void reverse(vector<int> &nums, int i, int j)
{
    while (i < j)
    {
        swap(nums[i], nums[j]);
        i++, j--;
    }
}
void rotate(vector<int> &nums, int k)
{

    int n = nums.size();

    if (k == 0 || n <= 1)
        return;

    k = k % n;
    reverse(nums, 0, n - k - 1 % n);
    reverse(nums, n - k % n, n - 1);
    reverse(nums, 0, n - 1);
}
*/