#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>> &v, int u, int ver)
{
    v[u].push_back(ver);
    v[ver].push_back(u);
}
// Print the graph
void printGraph(vector<vector<int>> &adj, int V)
{
    for (int d = 0; d < V; ++d)
    {
        cout << "\n Vertex "
             << d << ":";
        for (auto x : adj[d])
            cout << "-> " << x;
        printf("\n");
    }
}

void dfs(vector<vector<int>> &v, vector<int> &visited, int u)
{
    visited[u] = 1;
    cout << u;
    for (auto it : v[u])
    {
        if (!visited[it])
        {
            dfs(v, visited, it);
        }
    }
}

void bfs(vector<vector<int>> &v, vector<int> &visited, int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int t = q.front();
        visited[t] = true;
        cout << t;
        q.pop();
        for (auto it : v[t])
        {
            if (!visited[it])
            {
                q.push(it);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n; // no of nodes
    vector<vector<int>> v(n);
    // vector<vector<int>> edges;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int a, b;
    //     cin >> a >> b;
    //     edges.push_back([ a, b ]);
    // }
    addEdge(v, 0, 2);
    addEdge(v, 0, 3);
    addEdge(v, 0, 1);
    addEdge(v, 2, 4);
    // addEdge(v, 1, 2);
    // printGraph(v, 5);
    // prinitng adjacency list
    // for (auto it : v)
    // {
    //     for (auto ver : it)
    //     {
    //         cout << ver;
    //     }
    //     cout << "\n";
    // }
    vector<int> visited(n);
    // dfs(v, visited, 0);
    bfs(v, visited, 0);
}
