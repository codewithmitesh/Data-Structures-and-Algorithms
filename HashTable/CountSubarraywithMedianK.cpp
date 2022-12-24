/**
 * @file CountSubarraywithMedianK.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-12-02
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int countSubarrays(vector<int> &nums, int k)
{

    // concept of count no of subarray with sum k
    // simply prefix sum + hashmap concept

    int n = nums.size();
    unordered_map<int, int> mp;
    mp[0] = 1;
    bool flag = false;
    int sum = 0;
    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        // if less than then add into left part(means - in sum)
        if (nums[i] < k)
        {
            sum--;
        }
        // if greater then add into right (means + into sum)
        else if (nums[i] > k)
        {
            sum++;
        } // if found then make true
        if (nums[i] == k)
        {
            flag = true;
        }
        if (flag)
        {
            // for odd length simple find sum present for even simple find if               sum-1             present
            ans += mp[sum] + mp[sum - 1];
        }
        else
        {
            /// else add the sum into map
            mp[sum]++;
        }
    }
    return ans;
}
*/
