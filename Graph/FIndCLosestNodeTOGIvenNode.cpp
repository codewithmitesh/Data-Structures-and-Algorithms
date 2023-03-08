/**
 * @file FIndCLosestNodeTOGIvenNode.cpp
 *
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-25
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int closestMeetingNode(vector<int> &e, int n1, int n2)
    {
        auto bfs = [&](int src, vector<int> &dist, vector<int> &edge, int n)
        {
            queue<int> q;
            q.push(src);
            dist[src] = 0;
            while (q.size() > 0)
            {
                auto p = q.front();
                q.pop();
                if (edge[p] != -1 and dist[edge[p]] == INT_MAX)
                {
                    q.push(edge[p]);
                    dist[edge[p]] = dist[p] + 1;
                }
            }
        };
        int n = e.size();
        vector<int> A(n, INT_MAX), B(n, INT_MAX);
        bfs(n1, A, e, n);
        bfs(n2, B, e, n);
        int res = INT_MAX, node = -1;
        for (int i = 0; i < n; i++)
        {
            if (A[i] == INT_MAX or B[i] == INT_MAX)
                continue;
            if (res > max(A[i], B[i]))
                node = i, res = max(A[i], B[i]);
        }
        return node;
    }
};