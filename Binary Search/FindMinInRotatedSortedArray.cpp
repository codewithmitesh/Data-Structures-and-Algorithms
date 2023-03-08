/**
 * @file FindMinInRotatedSortedArray.cpp
 * @author your name (you@domain.com)
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
    int findMin(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0, j = n - 1;
        while (i < j)
        {
            int mid = (i + j) / 2;
            /// mid se j tak sorted hoga so mid ussme abhi toh sabse chhota hoga so search space ko left se mid tak reduce karo
            if (nums[mid] < nums[j])
            {
                j = mid;
            }
            else
            {
                // this else means left se mid tak sorted hoga, also agar aesa hai toh fir hamara mid minimum toh nahi hoga obviously so search space ko mid se kam me redduce karo
                i = mid + 1;
            }
        }
        return nums[i];
    }
};