/**
 * @file SingleThreadedCPU.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 */
/** @author Mitesh Tank (codewithmitesh) :- https://linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh , https://twitter.com/codewithmitesh
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh */

#include "SingleThreadedCPU.hpp"
#include <cassert>
class Solution
{
public:
    vector<int> getOrder(vector<vector<int>> &tasks)
    {
        vector<int> ans;
        int n = tasks.size();
        vector<vector<int>> process;
        for (int i = 0; i < tasks.size(); i++)
        {
            process.push_back({tasks[i][0], tasks[i][1], i});
        }
        sort(process.begin(), process.end());
        int currentTime = process[0][0];
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        int i = 0;
        while (i < n)
        {
            while (i < n && process[i][0] <= currentTime)
            {
                pq.push({process[i][1], process[i][2]});
                i++;
            }
            if (!pq.empty())
            {
                ans.push_back(pq.top().second);
                currentTime += pq.top().first;
                pq.pop();
            }
            else
            {
                currentTime = process[i][0];
            }
        }
        while (!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};