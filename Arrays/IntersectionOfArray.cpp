/**
 * @file IntersectionOfArray.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> res;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                i++;
            }
            if (nums1[i] > nums2[j])
            {
                j++;
            }
            else if (nums1[i] == nums2[j])
            {
                res.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return res;
    }
};
*/