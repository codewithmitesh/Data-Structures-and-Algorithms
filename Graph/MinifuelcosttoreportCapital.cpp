/**
 * @file MinifuelcosttoreportCapital.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
long long helper(vector<vector<int>> &graph, vector<int> &visited, long long &ans, int curr, long long &seats)
{
    // initializing ppl at every node
    long long ppl = 0;
    visited[curr] = 1;
    // transer tot all children and take a hold of ppl
    for (int i = 0; i < graph[curr].size(); i++)
    {
        if (!visited[graph[curr][i]])
        {
            ppl += helper(graph, visited, ans, graph[curr][i], seats);
        }
    }
    // this is actually backtraking we just call recursive call and then just return the total ppl required
    // khus ko ginke +1 karo
    ppl += (long long)1;
    // now if currently hum 0 pe nahi hai toh simple ceil(ppl/seat karne se total no of cars or trips or fuel milega)
    if (curr != 0)
    {
        ans += ((ppl + seats - (long long)1) / seats);
    }
    // return ppl to other caklls
    return ppl;
}
long long minimumFuelCost(vector<vector<int>> &roads, int seats)
{
    //
    int n = roads.size() + 1;
    // adjacency list
    vector<vector<int>> graph(n);
    // visited array for nodes
    vector<int> visited(n, 0);
    // create ad list fromm edges
    for (auto &i : roads)
    {
        graph[i[0]].push_back(i[1]);
        graph[i[1]].push_back(i[0]);
    }
    // ans to store trips or mini fuels
    long long ans = 0, seat = seats;
    // call dfs for 0th Node and which return the ans total people reach to the zero and ans will store total no of cars or trip or minimum fue required
    auto ppl = helper(graph, visited, ans, 0, seat);
    return ans;
}
*/