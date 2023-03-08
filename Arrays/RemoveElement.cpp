/**
 * @file RemoveElement.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-12-31
 *
 * @copyright Copyright (c) 2022
 *
 */
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {

        int ans = 0, n = nums.size();
        int j = n, i = 0;
        // sort(nums.begin(),nums.end());
        while (i < j)
        {
            if (nums[i] == val)
            {
                nums[i] = nums[j - 1];
                j--;
            }
            else
            {
                i++;
            }
        }

        return j;
    }
};