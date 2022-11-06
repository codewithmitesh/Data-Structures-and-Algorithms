/**
 * @file WordSearch.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-05
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool solve(vector<vector<char>> &board, string &word, vector<vector<int>> &vis, int i, int j, int index, int n, int m)
{

    if (index == word.length())
        return true;
    // if out of bound return
    if (i < 0 || j < 0 || i >= n || j >= m)
        return false;
    // if it is not the
    if (board[i][j] != word[index])
        return false;
    // if already visited return false
    if (vis[i][j])
        return false;
    // if it is the which we want then take it and visited[]
    vis[i][j] = 1;
    // now try to left right up and down go everydirect and try to make a word
    for (int k = 0; k < 4; k++)
    {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if (solve(board, word, vis, ni, nj, index + 1, n, m))
            return true;
    }
    // back track be marking non visted again
    vis[i][j] = 0;
    // return false if not possible anything
    return false;
}
bool exist(vector<vector<char>> &board, string word)
{
    // End kab hona
    int n = board.size(), m = board[0].size();
    vector<vector<int>> visited(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // first we need to find the first character so traversing into row and cloulmns and as soon as we found the first character we will call dfs from that
            if (board[i][j] == word[0] && solve(board, word, visited, i, j, 0, n, m))
                return true;
        }
    }
    return false;
}
*/