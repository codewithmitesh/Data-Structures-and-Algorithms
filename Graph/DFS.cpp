/**
 * @file DFS.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-03-15
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief Edges to Adjacency List
 *
vector<vector<int>> edgesToAdjList(int n, vector<vector<int>> edges)
{
    vector<vector<int>> adjList(n);
    for (int i = 0; i < edges.size(); i++)
    {
        adjList[edges[i][0]].push_back(edges[i][1]);
        if (edges[i][0] == edges[i][1])
        {
            continue;
        }
        adjList[edges[i][1]].push_back(edges[i][0]);
    }
    return adjList;
}

 */

/**
void DFS(int V, vector<int> adj[], int s, vector<bool> &visited, vector<int> &ans)
{
    visited[s] = true;
    ans.push_back(s);
    for (int u : adj[s])
    {
        if (visited[u] == false)
        {
            DFS(V, adj, u, visited, ans);
        }
    }
}
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    vector<bool> visited(V, false);
    vector<int> ans;
    DFS(V, adj, 0, visited, ans);
    return ans;
}
*/
