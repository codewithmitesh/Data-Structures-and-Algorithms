/**
 * @file LevelofNode.cpp
 * @author MItesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-04-06
 *
 * @copyright Copyright (c) 2022
 *
 */
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int BFS(int v, int source, vector<int> adj[], vector<int> &visited, int x)
    {

        queue<int> q;
        q.push(source);
        visited[source] = true;
        int level = 0;
        while (q.empty() == false)
        {

            int temp = q.front();
            q.pop();

            for (auto it : adj[temp])
            {
                if (it == x && visited[x] == false)
                {
                    return level;
                }
                if (visited[it] == false)
                {
                    visited[it] = true;
                    q.push(it);
                }
            }

            level++;
        }
        return -1;
    }
    // Function to find the level of node X.
    int nodeLevel(int V, vector<int> adj[], int X)
    {
        vector<int> visited(V + 1, 0);

        BFS(V, 0, adj, visited, X);
    }
};
// if(X>=V || X<0)
//     {
//         return -1;
//     }
//     else
//     {
//         vector<int>dist(V,INT_MAX);
//         queue<int>q;
//         q.push(0);
//         dist[0]=0;

//         while(!q.empty())
//         {
//             int node=q.front();
//             q.pop();
//             for(auto it:adj[node])
//             {
//                 if(dist[it]>1+dist[node])
//                 {
//                     dist[it]=1+dist[node];
//                     q.push(it);
//                 }
//             }
//         }
//       // for(int i=0;i<V;i++)
//       // {
//       //     cout<<dist[i]<<" ";
//       // }

//         return dist[X];
//     }
// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int V, E, X;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cin >> X;

        Solution obj;
        cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}

// } Driver Code Ends