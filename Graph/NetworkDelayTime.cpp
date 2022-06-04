/**
 * @file NetworkDelayTime.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-15
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int networkDelayTime(vector<vector<int>> &times, int n, int k)
{

    vector<int> dis(n + 1, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<vector<int>> adj[n + 1];

    // Graph Creation
    for (int j = 0; j < times.size(); j++)
    {
        int u = times[j][0];
        int v = times[j][1];
        int w = times[j][2];
        adj[u].push_back({v, w});
    }

    // Time from K to K is 0
    dis[k] = 0;
    pq.push({0, k});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        for (auto vec : adj[u]) // vec is vector containing v and w
        {
            int v = vec[0];
            int w = vec[1];

            if (dis[u] + w < dis[v])
            {
                pq.push({dis[u] + w, v});
                dis[v] = w + dis[u];
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (dis[i] == INT_MAX)
            return -1;
        ans = max(ans, dis[i]);
    }
    return ans;
}
*/