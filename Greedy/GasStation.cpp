/**
 * @file GasStation.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-05-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int total = 0;
    for (int i = 0; i < gas.size(); i++)
    {
        total += (gas[i] - cost[i]);
    }
    if (total < 0)
        return -1;
    int currFuel = 0, start = 0;
    for (int i = 0; i < gas.size(); i++)
    {
        currFuel += (gas[i] - cost[i]);
        if (currFuel < 0)
        {
            start = i + 1;
            currFuel = 0;
        }
    }
    return start;
}
int main()
{
    vector<int> gas = {5, 1, 2, 3, 4};
    vector<int> cost = {4, 4, 1, 5, 1};
    int ans = canCompleteCircuit(gas, cost);
    cout << ans;
}
