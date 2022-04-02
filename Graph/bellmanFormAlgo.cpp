/**
 * @file bellmanFormAlgo.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-04-01
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
//  Create a Node for Graph node or vertices
struct node
{
    int u;
    int v;
    int wt;
    node(int first, int second, int weight)
    {
        u = first;
        v = second;
        wt = weight;
    }
};

int main()
{
    int N, m;
    // N is no of vertices and m is No of Edges
    cin >> N >> m;
    vector<node> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back(node(u, v, wt));
    }
    // Taking Source vertices
    int src;
    cin >> src;
    // Creating the Distance array with values to be infinity other than source
    int inf = 10000000;
    vector<int> dist(N, inf);
    //  making src distance to 0
    dist[src] = 0;
    // * Relaxing the all edges exectly N-1 Times
    for (int i = 1; i <= N - 1; i++)
    {
        for (auto it : edges)
        {
            if (dist[it.u] + it.wt < dist[it.v])
            {
                dist[it.v] = dist[it.u] + it.wt;
            }
        }
    }
    // Taking flag to check weather it is futher reducable or not
    int fl = 0;
    for (auto it : edges)
    {
        if (dist[it.u] + it.wt < dist[it.v])
        {
            cout << "Negative Cycle";
            fl = 1;
            break;
        }
    }
    // is it is further reducable then it is containing the negative cycle
    if (!fl)
    {
        for (int i = 0; i < N; i++)
        {
            cout << i << " " << dist[i] << endl;
        }
    }

    return 0;
}

/*
6 7
3 2 6
5 3 1
0 1 5
1 5 -3
1 2 -2
3 4 -2
2 4 3
0
*/