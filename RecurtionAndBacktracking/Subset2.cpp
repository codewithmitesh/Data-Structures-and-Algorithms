/**
 * @file Subset2.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-10
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<vector<int>> ans;

void helper(int start, vector<int> &nums, vector<int> &temp)
{
    if (temp.size() == nums.size())
    {
        return;
    }
    for (int i = start; i < nums.size(); i++)
    {
        if (i > start && nums[i] == nums[i - 1])
        {
            continue;
        }
        temp.push_back(nums[i]);
        ans.push_back(temp);
        helper(i + 1, nums, temp);

        temp.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{

    sort(nums.begin(), nums.end());
    vector<int> temp;
    ans.push_back(temp);
    helper(0, nums, temp);
    return ans;
}
*/