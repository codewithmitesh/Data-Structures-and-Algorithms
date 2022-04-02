/**
 * @file FindthetownjudgeLT997.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-04-01
 *
 * @copyright Copyright (c) 2022
 *
 *
 * Leetcode Q 997 Graph Visted Array concept
 */
/**
int findJudge(int n, vector<vector<int>> &trust)
{

    vector<int> visited(n + 1, 0);

    for (int i = 0; i < trust.size(); i++)
    {

        visited[trust[i][0]]--; // if a given person trust someone then decrement the count of his index
        visited[trust[i][1]]++; // increment the count of the index whom he trusts
    }

    for (int i = 1; i < visited.size(); i++)
    {
        if (visited[i] == n - 1)
        {
            return i;
        }
    }

    return -1;
}
*/