/**
 * @file TimeNeededToInformAllEmployyes.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-22
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int numOfMinutes(int n, int headID, vector<int> &manager, vector<int> &informTime)
{
    // Will fo bfs and each time we for each round of queue becomes Empty we will add the minutes untill queue becomes empty

    // in queue we need to take the hold of the node current , timetillparent (yaha tak aane ke iye kitna time laga)

    vector<vector<int>> Adjlist(n + 1);
    // make graph out of manager connection info
    for (int i = 0; i < n; i++)
    {
        // for head no manager hense skip it
        if (manager[i] == -1)
            continue;
        // we are not including manager beacuse else we need to mark the visited hence we only traverse hence we only need
        Adjlist[manager[i]].push_back(i);
    }

    queue<pair<int, int>> q;
    int ans = INT_MIN;
    // initially start with head node and it will have 0 parent
    q.push({headID, 0});

    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {

            int currnode = q.front().first;
            int timetill = q.front().second;
            q.pop();
            int curentTime = timetill + informTime[currnode];
            ans = max(ans, curentTime);

            for (int node : Adjlist[currnode])
            {
                q.push({node, curentTime});
            }
        }
    }

    return ans;
}
*/