/**
 * @file NonDecreasingArray.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-06-25
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool checkPossibility(vector<int> &nums)
{

    bool modification = false;

    for (int i = 1; i < nums.size(); i++)
    {

        if (nums[i - 1] > nums[i])
        {

            if (modification == true)
            {
                return false;
            }

            modification = true;

            if (i < 2 || nums[i - 2] <= nums[i])
            {
                nums[i - 1] = nums[i];
            }
            else
            {
                nums[i] = nums[i - 1];
            }
        }
    }
    return true;
}
*/