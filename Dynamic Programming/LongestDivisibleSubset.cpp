/**
 * @file LongestDivisibleSubset.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-10-28
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<int> largestDivisibleSubset(vector<int> &nums)
{
    // declare the dp and hash vectors
    int n = nums.size();
    vector<int> dp(n, 1);
    vector<int> hash(n, 1);
    // sort them
    sort(nums.begin(), nums.end());
    // start traversing into array
    for (int i = 0; i <= n - 1; i++)
    {
        // change hash value or take a hold of current value
        hash[i] = i;
        for (int prev_index = 0; prev_index <= i - 1; prev_index++)
        {
            // check wheather it is divisible by prev or not and and it is already calcluted in dp array or not
            if (nums[i] % nums[prev_index] == 0 && 1 + dp[prev_index] > dp[i])
            {
                dp[i] = 1 + dp[prev_index];
                // stor the prev into hash
                hash[i] = prev_index;
            }
        }
    }
    //
    int ans = -1;
    int lastIndex = -1;
    //
    for (int i = 0; i <= n - 1; i++)
    {
        if (dp[i] > ans)
        {
            ans = dp[i];
            lastIndex = i;
        }
    }
    // ans array of temp
    vector<int> temp;
    temp.push_back(nums[lastIndex]);
    //
    while (hash[lastIndex] != lastIndex)
    {
        lastIndex = hash[lastIndex];
        temp.push_back(nums[lastIndex]);
    }
    // reverse the array
    reverse(temp.begin(), temp.end());
    return temp;
}
*/