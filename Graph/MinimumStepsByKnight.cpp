/**
 * @file MinimumStepsByKnight.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-20
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool isValid(int i, int j, int N)
{
    if (i <= 0 || j <= 0 || i > N || j > N)
    {
        return false;
    }
    return true;
}
int minStepToReachTarget(vector<int> &KnightPos, vector<int> &TargetPos, int n)
{
    // Code here
    // Creating BFS Queue
    queue<pair<int, int>> q;
    // Initialize queue
    q.push({KnightPos[0], KnightPos[1]});
    // visited Matrix to check if the current position s already visited or not
    vector<vector<int>> vis(n + 1, vector<int>(n + 1, false));
    // to store the ans
    int ans = 0;
    // Make initializing position visited
    vis[KnightPos[0]][KnightPos[1]] = true;
    // here we will be using the idea of the BFS or lovel order traversal Level by Level
    //  each time when level change we increase ans by ans++
    while (!q.empty())
    {
        int siz = q.size();
        while (siz--)
        {
            pair<int, int> temp = q.front();
            q.pop();
            int i = temp.first;
            int j = temp.second;
            // if we got the i and j as target position then return ans
            if (i == TargetPos[0] && j == TargetPos[1])
            {
                return ans;
            }
            // check for all 8 directions and take care if they are not out of bound and also if already visited or not
            // perform push into queue if not outof bund and not already visited
            // after pushing make it visited
            if (isValid(i - 2, j - 1, n) && vis[i - 2][j - 1] == false)
            {
                q.push({i - 2, j - 1});
                vis[i - 2][j - 1] = true;
            }
            if (isValid(i + 1, j - 2, n) && vis[i + 1][j - 2] == false)
            {
                q.push({i + 1, j - 2});
                vis[i + 1][j - 2] = true;
            }
            if (isValid(i + 2, j + 1, n) && vis[i + 2][j + 1] == false)
            {
                q.push({i + 2, j + 1});
                vis[i + 2][j + 1] = true;
            }
            if (isValid(i - 1, j - 2, n) && vis[i - 1][j - 2] == false)
            {
                q.push({i - 1, j - 2});
                vis[i - 1][j - 2] = true;
            }
            if (isValid(i - 1, j + 2, n) && vis[i - 1][j + 2] == false)
            {
                q.push({i - 1, j + 2});
                vis[i - 1][j + 2] = true;
            }
            if (isValid(i - 2, j + 1, n) && vis[i - 2][j + 1] == false)
            {
                q.push({i - 2, j + 1});
                vis[i - 2][j + 1] = true;
            }
            if (isValid(i + 1, j + 2, n) && vis[i + 1][j + 2] == false)
            {
                q.push({i + 1, j + 2});
                vis[i + 1][j + 2] = true;
            }
            if (isValid(i + 2, j - 1, n) && vis[i + 2][j - 1] == false)
            {
                q.push({i + 2, j - 1});
                vis[i + 2][j - 1] = true;
            }
        }
        // increase ans at each level change
        ans++;
    }
    return -1;
}
*/