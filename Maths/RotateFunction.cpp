/**
 * @file RotateFunction.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2023-01-02
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int maxRotateFunction(vector<int> &nums)
    {

        int ans = 0;
        int fo = 0, sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            fo += i * nums[i];
        }
        cout << fo << '\n';
        int res = fo;
        ans = fo;
        for (int i = n - 1; i > 0; i--)
        {
            ans += sum - (n * nums[i]);
            res = max(res, ans);
        }
        return res;
    }
};