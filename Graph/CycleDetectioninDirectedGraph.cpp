/**
 * @file CycleDetectioninCyclicGraph.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-03-17
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
    bool DFS(int V, vector<int> adj[], vector<bool> &visited, vector<bool> &recStack, int s)
{

    visited[s] = true;
    recStack[s] = true;

    for (int u : adj[s])
    {

        if (visited[u] == false)
        {
            if (DFS(V, adj, visited, recStack, u) == true)
            {
                return true;
            }
        }
        else if (recStack[u] == true)
        {
            return true;
        }
    }

    recStack[s] = false;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{

    vector<bool> visited(V, 0);
    vector<bool> recStack(V, 0);
    for (int i = 0; i < V; i++)
    {

        if (visited[i] == false)
        {
            if (DFS(V, adj, visited, recStack, i) == true)
            {
                return true;
            };
        }
    }

    return false;
}
*/