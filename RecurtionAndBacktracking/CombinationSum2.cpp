/**
 * @file CombinationSum2.cpp
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

void helper(int start, int target, vector<int> &temp, vector<int> &candidates)
{
    if (target < 0)
    {
        return;
    }
    if (target == 0)
    {
        ans.push_back(temp);
    }
    for (int i = start; i < candidates.size(); i++)
    {
        // to avoid duplicate combinations we need to check whether two adjacent same are same then Continue;
        if (i > start && candidates[i] == candidates[i - 1])
            continue;
        temp.push_back(candidates[i]);
        helper(i + 1, target - candidates[i], temp, candidates);
        temp.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<int> temp;
    sort(candidates.begin(), candidates.end());
    helper(0, target, temp, candidates);
    return ans;
}
*/