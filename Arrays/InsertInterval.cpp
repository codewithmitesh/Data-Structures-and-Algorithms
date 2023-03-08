/**
 * @file InsertInterval.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-16
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &in, vector<int> &nInt)
    {
        vector<vector<int>> ans;

        int i = 0, n = in.size();

        while (i < n && nInt[0] > in[i][1])
        {
            ans.push_back(in[i]);
            i++;
        }

        while (i < n && nInt[1] >= in[i][0])
        {
            nInt[0] = min(nInt[0], in[i][0]);
            nInt[1] = max(nInt[1], in[i][1]);
            i++;
        }
        ans.push_back(nInt);
        while (i < n)
        {
            ans.push_back(in[i]);
            i++;
        }
        return ans;
    }
};