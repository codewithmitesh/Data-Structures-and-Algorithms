/**
 * @file findPeakElement.cpp
 * @author codewithmitesh (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-25
 * 
 * @copyright Copyright (c) 2021
 * Problem Link:- https://leetcode.com/problems/find-peak-element/
 * 
 * 
 * Solution :- 

int findPeakElement(vector<int> &nums)
{

    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (mid != 0 && nums[mid] < nums[mid - 1])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return high;
}
 * 
 */
