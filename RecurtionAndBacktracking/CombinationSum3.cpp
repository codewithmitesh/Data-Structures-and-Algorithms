/**
 * @file CombinationSum3.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-10
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<vector<int>> ans;
void Helper(int start, int n, int k, vector<int> &temp)
{
    if (temp.size() == k)
    {
        if (n == 0)
        {
            ans.push_back(temp);
            return;
        }
    }
    for (int i = start; i <= 9; i++)
    {
        temp.push_back(i);
        Helper(i + 1, n - i, k, temp);
        temp.pop_back();
    }
}

vector<vector<int>> combinationSum3(int k, int n)
{
    vector<int> temp;
    Helper(1, n, k, temp);
    return ans;
}
*/