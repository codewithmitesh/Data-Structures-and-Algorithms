/**
 * @file Replace0withX.cpp
 * @author Mitesh T (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-20
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
void dfs(vector<vector<char>> &board, int row, int col)
{
    if (row >= 0 && col >= 0 && row < board.size() && col < board[0].size() &&
        board[row][col] == 'O')
    {
        board[row][col] = '#';

        dfs(board, row - 1, col); // top
        dfs(board, row, col - 1); // left
        dfs(board, row + 1, col); // down
        dfs(board, row, col + 1); // right
    }
}

public:
void solve(vector<vector<char>> &board)
{

    int rowSize = board.size(), colSize = board[0].size();

    // checking for first and last row
    for (int i = 0; i < colSize; i++)
    {

        // first row
        if (board[0][i] == 'O')
        {
            dfs(board, 0, i);
        }

        // last row
        if (board[rowSize - 1][i] == 'O')
        {
            dfs(board, rowSize - 1, i);
        }
    }

    // checking for first and last column
    for (int i = 0; i < rowSize; i++)
    {

        // first row
        if (board[i][0] == 'O')
        {
            dfs(board, i, 0);
        }

        // last row
        if (board[i][colSize - 1] == 'O')
        {
            dfs(board, i, colSize - 1);
        }
    }

    // traversing over whole matrix
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (board[i][j] == 'O')
            {
                board[i][j] = 'X';
            }

            if (board[i][j] == '#')
            {
                board[i][j] = 'O';
            }
        }
    }
}
*/