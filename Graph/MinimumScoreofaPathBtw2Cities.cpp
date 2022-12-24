/**
 * @file MinimumScoreofaPathBtw2Cities.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-12-04
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
   int ans = INT_MAX;
    void dfs(vector<vector<pii>>& g, vector<bool>& vis, int u) {
        vis[u] = true;

        for(auto [v, w] : g[u]) {
            ans = min(ans, w);
            if(!vis[v]) dfs(g,vis,v);
        }

    }
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pii>> g(n+1);
        for(auto r : roads) {
            int u = r[0], v = r[1], w = r[2];
            g[u].push_back({v, w});
            g[v].push_back({u, w});
        }

        vector<bool> vis(n+1, false);
         dfs(g, vis, 1);
         return ans;
    }
*/
/**
#define pii pair<int, int>
int dfs(vector<vector<pii>> &g, vector<bool> &vis, int u)
{
    vis[u] = true;
    int ans = INT_MAX;
    for (auto [v, w] : g[u])
    {
        ans = min(ans, w);
        if (!vis[v])
            ans = min(dfs(g, vis, v), ans);
    }
    return ans;
}

int minScore(int n, vector<vector<int>> &roads)
{
    vector<vector<pii>> g(n + 1);
    for (auto r : roads)
    {
        int u = r[0], v = r[1], w = r[2];
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    vector<bool> vis(n + 1, false);

    return dfs(g, vis, 1);
}
*/
