/**
 * @file MaximumSubarraySumDistictandK.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
long long maximumSubarraySum(vector<int> &nums, int k)
{

    int n = nums.size();
    unordered_map<int, int> ump;

    long long currSum = 0;
    long long ans = 0;

    for (int i = 0; i < k; i++)
    {
        currSum += (long long)nums[i];
        ump[nums[i]]++;
    }

    if (ump.size() == k)
    {
        ans = max(ans, currSum);
    }
    // cout<<ump.size();
    for (auto &it : ump)
    {
        cout << "1." << it.first << "->" << it.second << "\n";
    }

    long long i = 1, j = k;

    while (j < n)
    {
        ump[nums[i - 1]]--;
        if (ump[nums[i - 1]] == 0)
            ump.erase(nums[i - 1]);
        currSum = currSum - (long long)nums[i - 1];
        ump[nums[j]]++;
        currSum = currSum + (long long)nums[j];
        if (ump.size() == k)
            ans = max(ans, currSum);
        i++, j++;
    }

    return ans;
}
*/