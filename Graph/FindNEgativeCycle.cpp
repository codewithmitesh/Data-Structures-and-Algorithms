/**
 * @file FindNEgativeCycle.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-04-02
 *
 * @copyright Copyright (c) 2022
 *
 */
// * using Bellman Ford Algorithm
/**
int isNegativeWeightCycle(int n, vector<vector<int>> edges)
{
    vector<int> dist(n, INT_MAX);
    dist[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (auto &v : edges)
        {
            dist[v[1]] = std::min((long long)dist[v[0]] + v[2], (long long)dist[v[1]]);
        }
    }
    for (auto &v : edges)
    {
        if (dist[v[1]] > dist[v[0]] + v[2])
        {
            return true;
        }
    }
    return false;
}
*/