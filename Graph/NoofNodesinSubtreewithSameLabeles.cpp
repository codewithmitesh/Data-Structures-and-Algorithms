/**
 * @file NoofNodesinSubtreewithSameLabeles.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-12
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    // void dfs(int v,int prevNode,vector<vector<int>> &adj,vector<bool> &visited,vector<int> &ans,string lables,vector<int> &cnt){

    //     visited[v] = true;
    //     int prev = cnt[lables[v]-'a'];
    //     cnt[lables[v]-'a']+=1;
    //     for(auto u :adj[v]){
    //         if(prevNode==u)continue;
    //             dfs(u,v,adj,visited,ans,lables,cnt);
    //     }
    //     ans[v] = cnt[lables[v]-'a']-prev;
    // }
    // vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {

    //     vector<int> cnt(26,0);
    //     sort(edges.begin(),edges.end());
    //     vector<bool> visited(n, false);
    //     // Make Adjacency Graph
    //     vector<vector<int>> adj(n);
    //     for (auto &edge : edges)
    //     {
    //         adj[edge[0]].push_back(edge[1]);
    //         adj[edge[1]].push_back(edge[0]);
    //     }

    //     vector<int> ans(n,0);
    //     dfs(0,0,adj,visited,ans,labels,cnt);
    //     return ans;
    // }
    void dfsCountAndUpdate(int node, int prevNode, vector<vector<int>> &adjVec,
                           string &labels, vector<int> &solution, vector<int> &freqMap)
    {
        // Maintain a count of freq till now.
        int prevCount = freqMap[labels[node] - 'a'];

        freqMap[labels[node] - 'a'] += 1;
        // Count the no. of chars in all the child subtrees.
        for (int nextNode : adjVec[node])
        {
            if (prevNode == nextNode)
                continue;
            dfsCountAndUpdate(nextNode, node, adjVec, labels, solution, freqMap);
        }

        solution[node] = freqMap[labels[node] - 'a'] - prevCount;
    }

public:
    vector<int> countSubTrees(int n, vector<vector<int>> &edges, string labels)
    {
        vector<vector<int>> adjVec(n, vector<int>());

        for (vector<int> &edge : edges)
        {
            adjVec[edge[0]].push_back(edge[1]);
            adjVec[edge[1]].push_back(edge[0]);
        }

        vector<int> solution(n, 0);
        vector<int> freqMap = vector<int>(26, 0);
        dfsCountAndUpdate(0, 0, adjVec, labels, solution, freqMap);

        return solution;
    }
};
s