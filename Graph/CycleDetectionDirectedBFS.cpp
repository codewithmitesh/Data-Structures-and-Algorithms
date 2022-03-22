/**
 * @file CycleDetectionDirectedBFS.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-03-21
 *
 * @copyright Copyright (c) 2022
 * !Note :- Here we will use the topolocal sorting or Kahns Algorithm
 */
/**
void topologicalSort(vector<int> adj[], int V)
{
    vector<int> in_degree(V, 0);

    for (int u = 0; u < V; u++)
    {
        for (int x : adj[u])
            in_degree[x]++;
    }

    queue<int> q;
    for (int i = 0; i < V; i++)
        if (in_degree[i] == 0)
            q.push(i);

    int count = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int x : adj[u])
            if (--in_degree[x] == 0)
                q.push(x);
        count++;
    }
    if (count != V)
    {
        cout << "There exists a cycle in the graph\n";
    }
    else
    {
        cout << "There exists no cycle in the graph\n";
    }
}

*/