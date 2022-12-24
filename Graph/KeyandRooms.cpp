/**
 * @file KeyandRooms.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-12-20
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
void dfs(int u, vector<vector<int>> rooms, vector<bool> &visited)
{

    visited[u] = true;
    for (auto x : rooms[u])
    {
        if (visited[x] == false)
        {
            dfs(x, rooms, visited);
        }
    }
    return;
}
bool canVisitAllRooms(vector<vector<int>> &rooms)
{
    int n = rooms.size();
    vector<bool> visited(n, 0);

    dfs(0, rooms, visited);

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            return false;
        }
    }
    return true;
}
*/