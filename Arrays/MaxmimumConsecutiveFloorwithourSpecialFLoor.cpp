/**
 * @file MaxmimumConsecutiveFloorwithourSpecialFLoor.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-23
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int maxConsecutive(int bottom, int top, vector<int> &s)
    {

        int ans = INT_MIN;
        int n = s.size();
        sort(s.begin(), s.end());
        int temp = INT_MAX;
        for (int i = 1; i < n; i++)
        {

            temp = s[i] - s[i - 1] - 1;
            ans = max(temp, ans);
        }

        return max(ans, max(s[0] - bottom, top - s[n - 1]));
    }
};