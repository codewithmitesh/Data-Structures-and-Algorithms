/**
 * @file RottingOranges.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-12-30
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "bits/stdc++.h"
class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {

        if (grid.empty()) // if there is no orange.
            return 0;

        queue<pair<int, int>> q;

        int countFresh = 0;
        int n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    countFresh++;
                }
                if (grid[i][j] == 2)
                {
                    q.push({i, j});
                }
            }
        }
        int ans = 0;
        vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

        while (countFresh != 0 && !q.empty())
        {

            int sz = q.size();

            while (sz--)
            {

                auto p = q.front();
                q.pop();

                for (auto d : dir)
                {
                    int newX = p.first + d.first;
                    int newY = p.second + d.second;

                    if (newX >= 0 && newX < n && newY >= 0 && newY < m && grid[newX][newY] == 1)
                    {
                        grid[newX][newY] = 2;
                        countFresh--;
                        q.push({newX, newY});
                    }
                }
            }
            ans++;
        }

        return countFresh == 0 ? ans : -1;
    }
};