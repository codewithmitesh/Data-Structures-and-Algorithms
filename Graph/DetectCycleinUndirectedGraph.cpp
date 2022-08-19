/**
 * @file DetectCycleinUndirectedGraph.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-03-16
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 *
 *
bool DFS(int V, vector<int> adj[], vector<bool> &visited, int s, int parent)
{

    visited[s] = true;

    for (int u : adj[s])
    {

        if (visited[u] == false)
        {
            if (DFS(V, adj, visited, u, s) == true)
            {
                return true;
            }
        }
        else if (u != parent)
            return true;
    }
    return false;
}

bool isCycle(int V, vector<int> adj[])
{
    vector<bool> visited(V + 1, 0);
    for (int i = 0; i < V; i++)
    {
        if (visited[i] == false)
        {
            if (DFS(V, adj, visited, i, -1) == true)
                return true;
        }
    }
    return false;
}
*/