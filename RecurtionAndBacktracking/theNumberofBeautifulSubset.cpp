/**
 * @file theNumberofBeautifulSubset.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-22
 *
 * @copyright Copyright (c) 2023
 *
 */
int ans = 0;
void solve(int i, vector<int> &nums, int k, unordered_map<int, int> &ump)
{
    if (i == nums.size())
    {
        ans++;
        return;
    }
    if ((ump[nums[i] - k] == 0) && (ump[nums[i] + k] == 0))
    {
        ump[nums[i]]++;
        solve(i + 1, nums, k, ump);
        ump[nums[i]]--;
    }
    solve(i + 1, nums, k, ump);
}
int beautifulSubsets(vector<int> &nums, int k)
{
    unordered_map<int, int> uns;
    // int ans = 0;
    solve(0, nums, k, uns);
    return ans - 1;
}