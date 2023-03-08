/**
 * @file LargestSubsequenceWithLimitedSum.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-12-25
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<int> answerQueries(vector<int> &nums, vector<int> &q)
{

    sort(nums.begin(), nums.end());

    vector<int> presum(nums.size(), 0);
    int temp = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        temp += nums[i];
        presum[i] = temp;
    }
    vector<int> ans;
    for (int i = 0; i < q.size(); i++)
    {

        int ind = upper_bound(presum.begin(), presum.end(), q[i]) - presum.begin();
        ans.push_back(ind);
    }

    return ans;
}
*/