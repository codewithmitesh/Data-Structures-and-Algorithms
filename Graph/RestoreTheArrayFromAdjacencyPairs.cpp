/**
 * @file RestoreTheArrayFromAdjacencyPairs.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-06
 *
 * @copyright Copyright (c) 2022
 *
 * Problem link :- https://leetcode.com/problems/restore-the-array-from-adjacent-pairs/
 *
 */
/**
void DFS(unordered_map<int, vector<int>> &m, unordered_set<int> &visited, int a, vector<int> &ans)
{

    if (visited.find(a) != visited.end())
    {
        return;
    }
    else
    {
        visited.insert(a);
    }
    ans.push_back(a);

    for (auto x : m[a])
    {
        DFS(m, visited, x, ans);
    }
}
vector<int> restoreArray(vector<vector<int>> &adjacentPairs)
{

    // create a graph or Adjancy List
    unordered_map<int, vector<int>> m;
    for (auto a : adjacentPairs)
    {
        m[a[0]].push_back(a[1]);
        m[a[1]].push_back(a[0]);
    }

    // finding the terminal points of graph
    int head = 0;
    for (auto a : m)
    {
        if (a.second.size() == 1)
        {
            head = a.first;
        }
    }

    // calling DFS for appropriate inputs
    unordered_set<int> visited;
    vector<int> ans;

    DFS(m, visited, head, ans);

    return ans;
}
*/