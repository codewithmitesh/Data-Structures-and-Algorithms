/**
 * @file MinimumTimeToCollectAppleInTree.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-11
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int dfs(int start, int n, vector<vector<int>> &graph, vector<bool> &hasApple, vector<bool> &visited)
    {
        int time = 0, childTime;
        for (auto i : graph[start])
        {
            if (!visited[i])
            {
                visited[i] = true;
                childTime = dfs(i, n, graph, hasApple, visited);
                if (childTime != 0 || hasApple[i])
                    time += (childTime + 2);
            }
        }
        return time;
    }
    int minTime(int n, vector<vector<int>> &edges, vector<bool> &hasApple)
    {
        vector<bool> visited(n, false);
        // Make Adjacency Graph
        vector<vector<int>> graph(n);
        for (auto &edge : edges)
        {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        // Visit 0 as it is the beginning
        visited[0] = true;
        return dfs(0, n, graph, hasApple, visited);
    }
};