/**
 * @file PathwithMinimumEffort.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-04-28
 *
 * @copyright Copyright (c) 2022
 *
 */
// this solution may work but it is not working properly
/**
bool dfs(int i, int j, int n, int m, int mid, vector<vector<int>> &heights, int visited[10000][10000])
{

    if ((i = n - 1) && (j == m - 1))
    {
        return true;
    }

    bool flag = false;
    visited[i][j] = 1;

    if (i > 0 && visited[i - 1][j] == 0 && abs(heights[i][j] - heights[i - 1][j]) <= mid)
    {
        flag = flag || dfs(i - 1, j, n, m, mid, heights, visited);
    }
    if (j > 0 && visited[i][j - 1] == 0 && abs(heights[i][j] - heights[i][j - 1]) <= mid)
    {
        flag = flag || dfs(i, j - 1, n, m, mid, heights, visited);
    }
    if (i < n - 1 && visited[i + 1][j] == 0 && abs(heights[i][j] - heights[i + 1][j]) <= mid)
    {
        flag = flag || dfs(i + 1, j, n, m, mid, heights, visited);
    }
    if (j < m - 1 && visited[i][j + 1] == 0 && abs(heights[i][j] - heights[i][j + 1]) <= mid)
    {
        flag = flag || dfs(i, j + 1, n, m, mid, heights, visited);
    }

    return flag;
}

int minimumEffortPath(vector<vector<int>> &heights)
{

    int start = 0, end = 1000000, n = heights.size(), m = heights[0].size(), ans = INT_MAX;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int visited[10000][10000];
        memset(visited, 0, sizeof visited);
        if (dfs(0, 0, n, m, mid, heights, visited))
        {
            ans = min(ans, mid);
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
*/
// ! Working Solution bElow
/**
int di[4] = {-1, 1, 0, 0};
int dj[4] = {0, 0, -1, 1};
bool dfs(vector<vector<int>> &mat, vector<vector<bool>> &visited, int mid, int i, int j)
{
    if (i == mat.size() - 1 && j == mat[0].size() - 1)
    {
        return true;
    }
    visited[i][j] = true;
    for (int k = 0; k < 4; k++)
    {
        int newi = i + di[k];
        int newj = j + dj[k];

        if (newi >= 0 && newi < mat.size() && newj >= 0 && newj < mat[0].size() && visited[newi][newj] == false)
        {
            if (abs(mat[i][j] - mat[newi][newj]) <= mid)
            {
                if (dfs(mat, visited, mid, newi, newj) == true)
                {
                    return true;
                }
            }
        }
    }
    // visited[i][j]=false;
    return false;
}
int minimumEffortPath(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();
    int l = 0, h = 10000002;

    while (l < h)
    {
        int mid = (l + (h - l) / 2);
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        if (dfs(mat, visited, mid, 0, 0) == true)
        {
            h = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}
*/