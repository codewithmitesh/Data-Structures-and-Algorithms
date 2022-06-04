/**
 * @file CriticalConnectionInNetwork.cpp
 * @author Mitesh Tank(codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-05-18
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
unordered_map<int, vector<int>> adj; // Adj list
void DFS(int u, vector<int> &disc, vector<int> &low, vector<int> &parent, vector<vector<int>> &bridges)
{
    to store curent time
    static int time = 0; // timestamp
    disc[u] = low[u] = time;
    time += 1;
// Traverse all the adjacent of a list
    for (int v : adj[u])
    {
        if (disc[v] == -1) // If v is not visited
        {
            parent[v] = u; //update parent of v
            DFS(v, disc, low, parent, bridges); // do same for v
            // after dfs of v is completed then we check if we can get more smaller distance using low

            low[u] = min(low[u], low[v]);
 if descendant of u can not reach u or ancestor of u in DFS tree then u-v is a bridge
            if (low[v] > disc[u])
                bridges.push_back(vector<int>({u, v}));
        }
        // if already visited then check whether its not parent can visit to v with lesser time then update low u
        else if (v != parent[u]) // Check for back edge
            low[u] = min(low[u], disc[v]);
    }
}

void findBridges_Tarjan(int V, vector<vector<int>> &bridges)
{
    // distance vector to store distance , low vector to store lowest possible distance and parent to store parent
   // distance is also used as visited
    vector<int> disc(V, -1), low(V, -1), parent(V, -1);
    // Apply DFS for each component
    for (int i = 0; i < V; ++i)
        if (disc[i] == -1)
            DFS(i, disc, low, parent, bridges);
}

public:
vector<vector<int>> criticalConnections(int n, vector<vector<int>> &connections)
{
    //Make to Graph from connections (adjenccy list)
    for (int i = 0; i < connections.size(); ++i) // Make Adj list (step 1)
    {
        adj[connections[i][0]].push_back(connections[i][1]);
        adj[connections[i][1]].push_back(connections[i][0]);
    }
 // to store bridges
    vector<vector<int>> bridges;    // Store all the bridges as pairs
    findBridges_Tarjan(n, bridges); // step 2(applying TARJANS AlGO)
    return bridges;
}
*/