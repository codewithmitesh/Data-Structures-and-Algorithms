/**
 * @file SearchInsert.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-12-30
 *
 * @copyright Copyright (c) 2022
 *
 */
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {

        int i = 0, j = nums.size() - 1;
        while (i <= j)
        {
            int mid = i + j >> 1;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return i;
    }
};