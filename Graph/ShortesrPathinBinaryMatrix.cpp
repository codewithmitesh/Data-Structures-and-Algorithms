/**
 * @file ShortesrPathinBinaryMatrix.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-16
 *
 * @copyright Copyright (c) 2022
 *
 */
/** Easy BFS + Path Finding algo
int shortestPathBinaryMatrix(vector<vector<int>> &grid)
{

    int n = grid.size(), m = grid[0].size();

    // check wether source location or destination locations are 1 then we do not need to visit a matrix simply return -1

    if (grid[0][0] == 1 || grid[n - 1][m - 1] == 1)
    {
        return -1;
    }

    vector<vector<int>> direction = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}, {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};
    // create queue and put 0,0 source with cost 1;
    queue<vector<int>> q;
    q.push({0, 0, 1});
    // now make 0,0 visited by updating it to 1
    grid[0][0] = 1;

    // Do BFS untill queue become empty
    while (q.empty() == false)
    {

        // now we need to pop and push the adjacent till one level or one layer only

        int size = q.size();
        for (int i = 0; i < size; i++)
        {

            // get the top vector
            vector<int> v = q.front();
            q.pop();
            // intialize x,y, and cost
            int x = v[0], y = v[1], cost = v[2];

            // if we already reched the destination return the cost

            if (x == n - 1 && y == m - 1)
            {
                return cost;
            }
            // check for every direction and if possible the push it
            for (auto dir : direction)
            {
                // traversing each direction
                int nextX = x + dir[0], nextY = y + dir[1];

                // Check weather it is valid or not if valid the push it to q
                if (nextX >= 0 && nextX < n && nextY >= 0 && nextY < m && grid[nextX][nextY] == 0)
                {

                    q.push({nextX, nextY, cost + 1});
                    // as soon as pushed in queue mark it visited
                    grid[nextX][nextY] = 1;
                }
            }
        }
    }

    return -1;
}
*/