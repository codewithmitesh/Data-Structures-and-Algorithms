/**
 * @file 132Pattern.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-09
 *
 * @copyright Copyright (c) 2022
 * - Monotonic Stack --
 */
/**
int s3 = INT_MIN;
int n = nums.size();
stack<int> s;
for (int i = n - 1; i >= 0; i--)
{
    if (nums[i] < s3)
        return true;
    else
    {
        while (!s.empty() && nums[i] > s.top())
        {
            s3 = s.top();
            s.pop();
        }
    }
    s.push(nums[i]);
}
return false;
}
*/