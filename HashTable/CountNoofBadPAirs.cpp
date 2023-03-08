/**
 * @file CountNoofBadPAirs.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2023-01-03
 *
 * @copyright Copyright (c) 2023
 *
 */

class Solution
{
public:
    long long countBadPairs(vector<int> &nums)
    {

        unordered_map<int, int> ump;
        long long n = nums.size();
        long long ans = n * (n - 1) / 2;

        for (int i = 0; i < n; i++)
        {
            if (ump.find((nums[i] - i)) != ump.end())
            {
                ans -= ump[nums[i] - i];
                ump[nums[i] - i]++;
            }
            else
            {
                ump[nums[i] - i]++;
            }
        }

        return ans;
    }
};