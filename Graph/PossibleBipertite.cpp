/**
 * @file PossibleBipertite.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-12-21
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<int> color;
bool possibleBipartition(int n, vector<vector<int>> &dislikes)
{
    vector<int> adjList[n + 1];
    color.resize(n + 1, -1);

    // Create adjacency list
    for (int i = 0; i < dislikes.size(); i++)
    {
        int u = dislikes[i][0], v = dislikes[i][1];
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    // check whether is graph bipartite
    for (int i = 1; i <= n; i++)
    {
        if (color[i] == -1)
        {
            if (!isGraphBipartite(i, adjList))
                return false;
        }
    }
    return true;
}

bool isGraphBipartite(int i, vector<int> adjList[])
{
    queue<int> q;
    q.push(i);
    color[i] = 1;

    while (!q.empty())
    {
        int node = q.front();
        vector<int> t = adjList[node];
        q.pop();
        for (auto &num : t)
        {
            int desiredColor = 1 - color[node];
            if (color[num] == -1)
            {
                color[num] = desiredColor;
                q.push(num);
            }
            else if (color[num] != desiredColor)
                return false;
        }
    }
    return true;
}
*/