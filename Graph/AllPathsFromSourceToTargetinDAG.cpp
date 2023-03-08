/**
 * @file AllPathsFromSourceToTargetinDAG.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-12-30
 *
 * @copyright Copyright (c) 2022
 *
 */
/** @author Mitesh Tank (codewithmitesh) :- https://linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh , https://twitter.com/codewithmitesh
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh */
class Solution
{
public:
    void dfs(int u, vector<vector<int>> &g, vector<int> &temp, vector<vector<int>> &ans)
    {

        if (u == g.size() - 1)
        {
            temp.push_back(u);
            ans.push_back(temp);
            return;
        }
        temp.push_back(u);
        for (auto it : g[u])
        {
            dfs(it, g, temp, ans);
            temp.pop_back();
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &g)
    {

        int n = g.size();

        vector<vector<int>> ans;
        vector<int> temp;
        dfs(0, g, temp, ans);

        return ans;
    }
};