/**
 * @file FindAllPossiblePath.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-10
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<vector<int>> ans;
void Solve(int si, int sj, int n, int m, vector<vector<int>> &grid, vector<vector<int>> &ans, vector<int> temp)
{

    if (si >= n || sj >= m || si < 0 || sj < 0)
    {
        return;
    }

    if (si == n - 1 && sj == m - 1)
    {
        temp.push_back(grid[si][sj]);
        ans.push_back(temp);
        // temp.pop_back();
        return;
    }

    temp.push_back(grid[si][sj]);

    Solve(si + 1, sj, n, m, grid, ans, temp);
    // temp.pop_back();
    Solve(si, sj + 1, n, m, grid, ans, temp);
    // temp.pop_back();
}

vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
{

    vector<int> temp;
    Solve(0, 0, n, m, grid, ans, temp);
    return ans;
}
*/