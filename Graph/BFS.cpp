/**
 * @file BFS.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-03-15
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<int> bfsOfGraph(int V, vector<int> adj[])
{

    vector<int> ans;
    vector<bool> visited(V + 1, 0);

    queue<int> q;
    q.push(0);
    visited[0] = true;

    while (q.empty() == false)
    {

        int u = q.front();
        q.pop();

        ans.push_back(u);

        for (int it : adj[u])
        {

            if (visited[it] == false)
            {
                visited[it] = true;
                q.push(it);
            }
        }
    }
    return ans;
}
**/