/**
 * @file COunthtePath.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-02
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int ans = 0;
void f(int s, int d, vector<int> adj[])
{
    if (s == d)
    {
        ans++;
        return;
    }
    for (auto it : adj[s])
    {
        f(it, d, adj);
    }
}

int possible_paths(vector<vector<int>> edges, int n, int s, int d)
{
    ans = 0;
    vector<int> adj[n];
    for (auto it : edges)
    {
        adj[it[0]].push_back(it[1]);
    }
    f(s, d, adj);
    return ans;
}
*/