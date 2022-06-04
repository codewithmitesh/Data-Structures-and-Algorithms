/**
 * @file Permutations.cpp
 * @author Mitesh tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-15
 *
 * @copyright Copyright (c) 2022
 *
 */
/** With Frw array of extra space O(n)
void getPermutations(vector<vector<int>> &ans, vector<int> temp, vector<int> &freq, vector<int> &nums)
{

    if (temp.size() == nums.size())
    {

        ans.push_back(temp);
        return;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        // if i is not visited then only put it in temp
        if (freq[i] == 0)
        {
            temp.push_back(nums[i]);
            freq[i] = 1;

            getPermutations(ans, temp, freq, nums);
            freq[i] = 0;
            temp.pop_back();
        }
    }
}
vector<vector<int>> permute(vector<int> &nums)
{

    vector<int> temp;
    vector<vector<int>> ans;

    vector<int> freq(nums.size(), 0);

    getPermutations(ans, temp, freq, nums);

    return ans;
}
*/

/// with less Space complexity -- No Extra Temp or No Extra Frequency array
/**
void recurPermute(int index, vector<int> &nums, vector<vector<int>> &ans)
{
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        recurPermute(index + 1, nums, ans);
        swap(nums[index], nums[i]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    recurPermute(0, nums, ans);
    return ans;
}

*/
