/**
 * @file CourseSchedule2.cpp
 * @author your name (you@do.com)
 * @brief
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 */
/** @author Mitesh Tank (codewithmitesh) :- https://linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh , https://twitter.com/codewithmitesh
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh */
#include <bits/stdc++.h>
class Solution
{
public:
    vector<int> findOrder(int n, vector<vector<int>> &p)
    {

        // simple directed graph is given and we need to find the if we can take a course or not which can be found by checking if we can find a cycle then not possible return empty array
        // else just return the topological sort

        // vector<int> ans;

        // vector<vector<int>> adj;
        // vector<int> indegree(n+1, 0);
        // for (int i = 0; i < p.size(); i++)
        // {
        //     adj[p[i][1]].push_back(p[i][0]);
        //     indegree[p[i][0]]++;
        // }

        // queue<int> q;
        // for (int i = 0; i < n; i++)
        // {
        //     if (indegree[i] == 0)
        //     {
        //         q.push(i);
        //     }
        // }

        // while (!q.empty())
        // {
        //     int node = q.front();
        //     q.pop();
        //     ans.push_back(node);
        //     for (auto it : adj[node])
        //     {
        //         indegree[it]--;
        //         if (indegree[it] == 0)
        //         {
        //             q.push(it);
        //         }
        //     }
        // }
        // return ans;
        map<int, vector<int>> mp;
        vector<int> in(n);
        queue<int> q;
        for (auto v : p)
        {
            mp[v[1]].push_back(v[0]);
            in[v[0]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (in[i] == 0)
                q.push(i);
        }
        cout << q.size();
        vector<int> ans;
        while (!q.empty())
        {
            int t = q.front();
            q.pop();
            cout << t << "e";
            ans.push_back(t);
            for (int i : mp[t])
            {
                in[i]--;
                if (in[i] == 0)
                    q.push(i);
            }
        }
        if (ans.size() == n)
            return ans;
        return {};
    }
};