/**
 * @file DijkstrasAlgorithm.cpp
 * @author Mitesh tark (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-03-22
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
    vector<int> dist(V, INT_MAX);
    // creating min heap
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[S] = 0;
    pq.push({0, S});

    while (!pq.empty())
    {
        int node = pq.top().second;
        int distancetillnow = pq.top().first; // distancetillnow is dist[u]

        pq.pop();

        for (auto it : adj[node])
        {
            int adjacentnode = it[0];
            int edgeweight = it[1];

            if (distancetillnow + edgeweight < dist[adjacentnode])
            {
                dist[adjacentnode] = distancetillnow + edgeweight;
                pq.push({dist[adjacentnode], adjacentnode});
            }
        }
    }

    return dist;
}
*/
