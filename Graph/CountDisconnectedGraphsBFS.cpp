/**
 * @file CountDisconnectedGraphsBFS.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-03-15
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
void BFS(vector<int> adj[], int s, bool visited[])
{
    queue<int> q;

    visited[s] = true;
    q.push(s);

    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int BFSDin(vector<int> adj[], int V)
{
    bool visited[V];
    int count = 0;
    for (int i = 0; i < V; i++)
        visited[i] = false;

    for (int i = 0; i < V; i++)
    {
        if (visited[i] == false)
        {
            BFS(adj, i, visited);
            count++;
        }
    }

    return count;
}

*/