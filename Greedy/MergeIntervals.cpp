/**
 * @file MergeIntervals.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 */
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &in)
    {

        vector<vector<int>> ans;
        int n = in.size();
        sort(in.begin(), in.end());
        if (n != 0)
        {

            ans.push_back(in[0]);
        }
        for (int i = 1; i < n; i++)
        {
            vector<int> temp = ans.back();
            ans.pop_back();
            if (temp[1] >= in[i][0])
            {
                temp[1] = max(temp[1], in[i][1]);
                ans.push_back(temp);
            }
            else
            {
                ans.push_back(temp);
                ans.push_back(in[i]);
            }
        }
        return ans;
    }
};