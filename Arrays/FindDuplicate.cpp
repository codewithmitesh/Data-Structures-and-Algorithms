/**
 * @file FindDuplicate.cpp
 * @author Mitesh tank
 * @brief
 * @version 0.1
 * @date 2022-12-21
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int findDuplicate(vector<int> &nums)
{

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[abs(nums[i])] < 0)
        {
            return abs(nums[i]);
        }
        nums[abs(nums[i])] *= -1;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
*/