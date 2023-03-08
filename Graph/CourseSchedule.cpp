/**
 * @file CourseSchedule.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-12-24
 *
 * @copyright Copyright (c) 2022
 *
 */
/** @author Mitesh Tank (codewithmitesh) :- https://linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh , https://twitter.com/codewithmitesh
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh */
/**
bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
{

    // simple find if there is cycle in directed graph or not for that we can use the TOpological sorting

    // topological sort means simply count and reduce by 1 indegree and as soon as indegree becomes zero

    vector<vector<int>> graph(numCourses);
    vector<int> indegree(numCourses, 0);

    for (auto m : prerequisites)
    {
        graph[m[1]].push_back(m[0]);
        indegree[m[0]]++;
    }

    queue<int> q;
    for (int i = 0; i < indegree.size(); i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    int count = 0;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        count++;
        for (auto it : graph[temp])
        {
            indegree[it]--;
            if (indegree[it] == 0)
            {
                q.push(it);
            }
        }
    }

    return count == numCourses;
}*/