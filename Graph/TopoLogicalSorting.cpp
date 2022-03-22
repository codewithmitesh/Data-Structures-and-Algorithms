/**
 * @file TopoLogicalSorting.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-03-17
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<int> topoSort(int V, vector<int> adj[])
{
    vector<int> ans;
     // Creating vector for indegree
    vector<int> indegree(V, 0);
    // traversing through adjacency list and marking the indegrees
    for (int u = 0; u < V; u++)
    {
        for (int x : adj[u])
        {
            indegree[x]++;
        }
    }
    queue<int> q;
    for (int i = 0; i < V; i++)
    {

        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        ans.push_back(u);

        for (int x : adj[u])
        {
            indegree[x]--;
            if (indegree[x] == 0)
            {
                q.push(x);
            }
        }
    }

    return ans;
}
*/