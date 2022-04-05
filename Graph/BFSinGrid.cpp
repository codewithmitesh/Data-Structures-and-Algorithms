/**
 * @file BFSinGrid.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-04-02
 *
 * @copyright Copyright (c) 2022
 *
 * Source :- CodenCode Video
 *
 */

#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
int N, M; // No of Rows and Columns on Grid or Matrix
//* Every will be starting from index 1

int distanceArr[1001][1001];
int visited[1001][1001];

bool isValid(int x, int y)
{
    // grid will have starting index from 1
    if (x < 1 || y < 1 || x > N || y > M)
        return false;

    if (visited[x][y] == true)
        return false;

    return true;
}
// Dx will be of left down left up
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void BFS(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;
    distanceArr[x][y] = 0;

    while (!q.empty())
    {
        int currX = q.front().first;
        int currY = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            if (isValid(currX + dx[i], currY + dy[i]))
            {
                q.push({currX + dx[i], currY + dy[i]});
                visited[currX + dx[i]][currY + dy[i]] = 1;
                distanceArr[currX + dx[i]][currY + dy[i]] = distanceArr[currX][currY] + 1;
            }
        }
    }
}

void printDistance(int x, int y)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cout << distanceArr[i][j] << " ";
        }
        cout << nl;
    }
}

int main()
{
    cin >> N >> M;

    int x, y;
    cin >> x >> y;
    BFS(x, y);
    printDistance(x, y);

    return 0;
}
