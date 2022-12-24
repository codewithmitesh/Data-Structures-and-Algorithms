/**
 * @file AsFarfromtheland.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};

int maxDistance(vector<vector<int>> &grid)
{
    // length
    int r = grid.size();
    int c = grid[0].size();

    queue<pair<int, int>> q;
    // put all 1s in the queue first then baaki and make
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (grid[i][j] == 1)
            {
                q.push({i, j});
                grid[i][j] = 2; // marking it visited
            }
        }
    }
    if (q.empty() || q.size() == r * c)
        return -1;
    int cnt = 0;
    int maxi = 0;
    while (!q.empty())
    {

        int sz = q.size();
        while (sz--)
        {
            auto node = q.front();
            q.pop();
            // traverse to all 4 direction BFS
            for (int i = 0; i < 4; ++i)
            {
                int next_i = node.first + dx[i];
                int next_j = node.second + dy[i];
                // check if in bound and and and is zero
                if (next_i >= 0 && next_j >= 0 && next_i < r && next_j < c)
                {
                    if (grid[next_i][next_j] == 0)
                    {

                        grid[next_i][next_j] = 2; // visited mark kiya ya visualizze karne ke liye ki kitne steps hui hai
                        q.push({next_i, next_j});
                    }
                }
            }
        }
        maxi++;
    }
    return maxi - 1;
}
*/