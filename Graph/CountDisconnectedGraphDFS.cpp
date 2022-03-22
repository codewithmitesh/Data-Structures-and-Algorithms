/**
 * @file CountDisconnectedGraphDFS.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-03-16
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
void DFSRec(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;

    for (int u : adj[s])
    {
        if (visited[u] == false)
            DFSRec(adj, u, visited);
    }
}

int DFS(vector<int> adj[], int V)
{
    int count = 0;
    bool visited[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    for (int i = 0; i < V; i++)
    {
        if (visited[i] == false)
        {
            DFSRec(adj, i, visited);
            count++;
        }
    }
    return count;
}
*/