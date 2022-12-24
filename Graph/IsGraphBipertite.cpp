/**
 * @file IsGraphBipertite.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-12-21
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool bfs(int value, vector<vector<int>> grid, vector<int> &visited)
{
    queue<int> q;
    q.push(value);
    visited[value] = 0;

    while (!q.empty())
    {
        vector<int> temp = grid[q.front()];
        int val = q.front();
        q.pop();

        for (int i = 0; i < temp.size(); i++)
        {
            if (visited[temp[i]] == -1)
            {
                visited[temp[i]] = !visited[val];
                q.push(temp[i]);
            }
            else if (visited[temp[i]] == visited[val])
                return false;
        }
    }
    return true;
}

bool isBipartite(vector<vector<int>> &graph)
{
    int node = graph.size();
    vector<int> visited(node, -1);
    for (int i = 0; i < node; i++)
    {
        if (visited[i] == -1)
        {
            if (bfs(i, graph, visited) == false)
                return false;
        }
    }
    return true;
}
*/
/**
bool check(int start, int v, vector<vector<int>> &graph, int color[])
{
    color[start] = 0;
    queue<int> q;
    q.push(start);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto it : graph[node])
        {
            if (color[it] == -1)
            {
                color[it] = !color[node];
                q.push(it);
            }
            else if (color[it] == color[node])
            {
                return false;
            }
        }
    }
    return true;
}

public:
bool isBipartite(vector<vector<int>> &graph)
{
    int v = graph.size();
    int color[v];
    for (int i = 0; i < v; i++)
    {
        color[i] = -1;
    }
    for (int i = 0; i < v; i++)
    {
        if (color[i] == -1)
        {
            if (check(i, v, graph, color) == false)
            {
                return false;
            }
        }
    }
    return true;
}
*/