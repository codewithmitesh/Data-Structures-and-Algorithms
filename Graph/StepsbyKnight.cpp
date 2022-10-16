/**
 * @file StepsbyKnight.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-04-02
 *
 * @copyright Copyright (c) 2022
 *
 */
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    bool isValid(int x, int y, int N)
    {
        // grid will have starting index from 1
        if (x < 1 || y < 1 || x > N || y > N)
            return false;

        if (visited[x][y] == true)
            return false;

        return true;
    }
    // Dx will be of left down left up
    int dx[8] = {1, 1, -1, -1, -2, 2, -2, 2};
    int dy[8] = {-2, 2, 2, -2, +1, +1, -1, -1};

    bool visited[1001][1001];
    bool distanceArr[1001][1001];

    int BFS(int x, int y, int n, vector<int> &TargetPos)
    {

        queue<pair<int, int>> q;
        q.push({x, y});
        visited[x][y] = 1;

        while (!q.empty())
        {

            pair<int, int> p = q.front();
            int currX = p.first;
            int currY = p.second;
            q.pop();

            for (int i = 0; i < 8; i++)
            {

                if (isValid(currX + dx[i], currY + dy[i], n))
                {

                    if (currX + dx[i] == TargetPos[0] && currY + dy[i] == TargetPos[1])
                    {
                        visited[currX + dx[i]][currY + dy[i]] = 1;
                        distanceArr[currX + dx[i]][currY + dy[i]] = distanceArr[currX][currY] + 1;
                        return distanceArr[currX + dx[i]][currY + dy[i]];
                    }
                    q.push({currX + dx[i], currY + dy[i]});
                    visited[currX + dx[i]][currY + dy[i]] = 1;
                    distanceArr[currX + dx[i]][currY + dy[i]] = distanceArr[currX][currY] + 1;
                }
            }
        }
    }

    // Function to find out minimum steps Knight needs to reach target position.
    int minStepToReachTarget(vector<int> &KnightPos, vector<int> &TargetPos, int N)
    {

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                visited[i][j] = 0;
                distanceArr[i][j] = 0;
            }
        }

        int x = KnightPos[0], y = KnightPos[1];
        return BFS(x, y, N, TargetPos);
    }
};

// { Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        vector<int> KnightPos(2);
        vector<int> TargetPos(2);
        int N;
        cin >> N;
        cin >> KnightPos[0] >> KnightPos[1];
        cin >> TargetPos[0] >> TargetPos[1];
        Solution obj;
        int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends