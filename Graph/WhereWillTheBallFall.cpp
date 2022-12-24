/**
 * @file WhereWillTheBallFall.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-22
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<int> ans;
void dfs(int i, int j, int startngIndex, vector<vector<int>> &grid)
{
    // if i reach to end then update the startingIndex into ans
    if (i == grid.size())
    {
        ans[startngIndex] = j;
        return;
    }

    if (grid[i][j] == 1)
    {
        // first of all bound me hone chahiye && i ka right bhi 1 hona chahiye
        if (j + 1 < grid[0].size() && grid[i][j + 1] == 1)
        {
            dfs(i + 1, j + 1, startngIndex, grid);
        }
        else
        {
            return;
        }
    }
    // if -1 hai toh bound me hona chahiye and left mebhi -1 hona chahiye tabhi niche jaayega
    else if (grid[i][j] == -1)
    {
        if (j - 1 >= 0 && grid[i][j - 1] == -1)
        {
            dfs(i + 1, j - 1, startngIndex, grid);
        }
        else
        {
            return;
        }
    }
}
vector<int> findBall(vector<vector<int>> &grid)
{
    int n = grid.size();
    ans.resize(grid[0].size(), -1);
    for (int i = 0; i < grid[0].size(); i++)
    {
        dfs(0, i, i, grid);
    }
    return ans;
}
*/