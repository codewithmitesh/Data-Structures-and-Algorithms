/**
 * @file MinimumNoofVerticestoReachAllNodes.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-18
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 *
vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
{
    vector<int> v(n, 0);

    vector<int> ans;
    int i;
    for (auto &i : edges)
    {
        v[i[1]]++;
    }

    for (i = 0; i < n; i++)
    {
        if (!v[i])
            ans.push_back(i);
    }
    return ans;
}
*/