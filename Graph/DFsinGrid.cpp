/**
 * @file DFsinGrid.cpp
 * @author This is an Example of DFS in Grid
 *
 * ! Source a CODENCODE Video file
 * @brief
 * @version 0.1
 * @date 2022-04-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
int N, M; // NO of rows and column for n X m matrix

bool visited[1000][1000];
// Function to check if this x and y coordinates ane Valid or Not Basically this is for Out of Bound Condition

bool isValid(int x, int y)
{
    // grid will have starting index from 1
    if (x < 1 || y < 1 || x > N || y > M)
        return false;

    if (visited[x][y] == true)
        return false;

    return true;
}
// Dx will be of up right down left
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
void DFS(int x, int y)
{

    visited[x][y] = true;
    cout << x << " " << y << nl;
    for (int i = 0; i < 4; i++)
    {
        if (isValid(x + dx[i], y + dy[i]))
        {
            DFS(x + dx[i], y + dy[i]);
        }
    }

    // ! OR
    //     if (isValid(x - 1, y))
    //         DFS(x - 1, y);
    //     if (isValid(x, y + 1))
    //         DFS(x, y + 1);
    //     if (isValid(x + 1, y))
    //         DFS(x + 1, y);
    //     if (isValid(x, y - 1))
    //         DFS(x, y - 1);
}

int main()
{

    cin >> N >> M;
    DFS(1, 1);

    return 0;
}
