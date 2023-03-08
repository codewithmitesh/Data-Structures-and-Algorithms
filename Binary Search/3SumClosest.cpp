/**
 * @file 3SumClosest.cpp
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
    int threeSumClosest(vector<int> &nums, int target)
    {

        int ans = INT_MIN, diff = INT_MAX;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++)
        {

            int j = i + 1, k = n - 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (abs(target - sum) < diff)
                {

                    cout << (target - sum) << " " << sum << "\n";
                    diff = min(diff, abs(target - sum));
                    ans = sum;
                }
                if (sum < target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }

        return ans;
    }
};