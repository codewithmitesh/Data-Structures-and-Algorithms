/**
 * @file PossiblePathsBetween2Vertices.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-04-07
 *
 * @copyright Copyright (c) 2022
 *
 * * Idea :- Basically nee dto cout all posiblke path in graph from one Source to Destination
 * * After reading the question we get to know that DFS will Work for this problem So Simply do the DFS and if Source becomes Destination then ans++ and after traverssing a node make its visited false again so that we can traverse it again from next adjacent
 *
 */
/**
int ans = 0;

void DFS(int V, vector<int> adj[], vector<int> &visited, int source, int destination)
{

    visited[source] = 1;
    if (source == destination)
    {
        ans++;
    }
    for (auto it : adj[source])
    {

        if (visited[it] == 0)
        {
            DFS(V, adj, visited, it, destination);
        }
    }
    visited[source] = 0;
}
// Function to count paths between two vertices in a directed graph.
int countPaths(int V, vector<int> adj[], int source, int destination)
{

    vector<int> visited(V, 0);

    DFS(V, adj, visited, source, destination);

    return ans;
}


*/