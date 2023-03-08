/**
 * @file SnakeAndLadder.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-24
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int snakesAndLadders(vector<vector<int>> &board)
    {
        int n = board.size();
        int moves = 0;
        queue<int> q;
        // setting visited array to false initially
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        q.push(1);
        visited[n - 1][0] = true;
        while (!q.empty())
        {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                int currBoardVal = q.front();
                q.pop();
                if (currBoardVal == n * n)
                    return moves;
                for (int diceVal = 1; diceVal <= 6; diceVal++)
                {
                    if (currBoardVal + diceVal > n * n)
                        break;
                    vector<int> pos = findCoordinates(currBoardVal + diceVal, n);
                    int row = pos[0];
                    int col = pos[1];
                    if (visited[row][col] == false)
                    {
                        visited[row][col] = true;
                        if (board[row][col] == -1)
                        {
                            q.push(currBoardVal + diceVal);
                        }
                        else
                        {
                            q.push(board[row][col]);
                        }
                    }
                }
            }
            moves++;
        }
        return -1;
    }
    // Function returns a vector of integers, representing the coordinates (row and column) of the element at position curr on the board.
    vector<int> findCoordinates(int currVal, int n)
    {
        // calculates the row by subtracting the quotient of (curr-1) / n from n-1. This is done to convert the 1-indexed position of the element to a 0-indexed position in the board.
        int row = n - (currVal - 1) / n - 1;
        int col = (currVal - 1) % n;
        if (row % 2 == n % 2)
        {
            return {row, n - 1 - col};
        }
        else
        {
            return {row, col};
        }
    }
};