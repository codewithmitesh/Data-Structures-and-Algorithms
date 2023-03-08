/**
 * @file IPO.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-09
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int findMaximizedCapital(int k, int w, vector<int> &p, vector<int> &c)
    {

        int n = p.size();
        vector<pair<int, int>> temp;
        for (int i = 0; i < n; i++)
        {
            temp.push_back({c[i], p[i]});
        }
        priority_queue<int> pq;
        sort(temp.begin(), temp.end());
        int i = 0;
        while (i < n && k)
        {

            // we put all into the pq
            if (i < n && temp[i].first <= w)
            {
                pq.push(temp[i].second);
                i++;
            }
            else
            {
                if (pq.empty())
                    return w;
                w += pq.top();
                pq.pop();
                k--;
            }
        }
        while (k-- && !pq.empty())
        {
            w += pq.top();
            pq.pop();
        }
        return w;
    }
};