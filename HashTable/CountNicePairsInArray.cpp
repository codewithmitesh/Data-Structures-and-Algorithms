/**
 * @file CountNicePairsInArray.cpp
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
    int reverese(int n)
    {

        int reve = 0;

        while (n > 0)
        {
            int ld = n % 10;
            reve = reve * 10 + ld;
            n /= 10;
        }
        cout << reve << " ";
        return reve;
    }
    int countNicePairs(vector<int> &nums)
    {

        long long n = nums.size();
        long long ans = 0;

        unordered_map<int, int> ump;

        for (int i = 0; i < n; i++)
        {
            int rev = reverese(nums[i]);
            // cout<<rev<<" ";
            if (ump.find((nums[i] - rev)) != ump.end())
            {
                ans += ump[(nums[i] - rev)];
                ump[(nums[i] - rev)]++;
            }
            else
            {
                ump[(nums[i] - rev)]++;
            }
        }

        return ans % 1000000007;
    }
};