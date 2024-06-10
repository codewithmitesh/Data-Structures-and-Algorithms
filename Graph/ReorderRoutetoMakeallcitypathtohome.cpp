/**
 * @brief
 *
 */
int ans = 0;
void dfs(vector<vector<pair<int, int>>> &adj, vector<bool> &visited, int node)
{

    visited[node] = true;

    for (auto it : adj[node])
    {
        if (visited[it.first] == false)
        {
            int tmp = it.second;
            if (tmp == 1)
            {
                ans++;
            }
            dfs(adj, visited, it.first);
        }
    }
}
int minReorder(int n, vector<vector<int>> &c)
{

    vector<vector<pair<int, int>>> adj(n);
    vector<bool> visited(n, false);

    for (auto it : c)
    {
        adj[it[0]].push_back({it[1], 1});
        adj[it[1]].push_back({it[0], -1});
    }

    dfs(adj, visited, 0);
    return ans;
}