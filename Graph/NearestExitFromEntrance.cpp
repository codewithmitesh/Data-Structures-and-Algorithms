/**
 * @file NearestExitFromEntrance.cpp
 * @author Mitesh T (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-21
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<int> rowDir = {-1, 1, 0, 0};
vector<int> colDir = {0, 0, -1, 1};
bool isAtBorder(vector<vector<char>> &maze, int row, int col)
{
    if ((row == 0) || (row == maze.size() - 1))
        return true;
    if ((col == 0) || (col == maze[0].size() - 1))
        return true;
    return false;
}
bool isValidStep(vector<vector<char>> &maze, int &row, int &col)
{
    int m = maze.size(), n = maze[0].size();
    if (row < 0 || row == m || col < 0 || col == n || maze[row][col] == '+')
        return false;
    else
        return true;
}
int nearestExit(vector<vector<char>> &maze, vector<int> &entrance)
{
    queue<pair<int, int>> q;
    q.push({entrance[0], entrance[1]});
    int pathLen = 0;
    maze[entrance[0]][entrance[1]] = '+'; // Instead of using a visited matrix, just mark the visited cell as '+'
                                          //'+' will mean that it is either a wall or cell that is  already visited
    while (!q.empty())
    {
        int size = q.size();
        while (size--)
        {
            int currRow = q.front().first;
            int currCol = q.front().second;
            q.pop();

            //================================================================================
            // explores all adjacent cells without writing more code
            for (int dirIdx = 0; dirIdx < 4; dirIdx++) // checking top, bottom, left, right
            {
                int newRow = currRow + rowDir[dirIdx]; // currRow - 1, currRow + 1, currRow + 0, currRow + 0
                int newCol = currCol + colDir[dirIdx]; // currCol + 0, currCol + 0, currCol - 1, currCol + 1
                if (isValidStep(maze, newRow, newCol))
                {
                    maze[newRow][newCol] = '+'; // mark as visited and push in queue
                    if (isAtBorder(maze, newRow, newCol))
                        return (pathLen + 1); // BOOM, GOT YOUR TARGET :))
                    else
                        q.push({newRow, newCol});
                }
            }
            //====================================================================================
        }
        pathLen++;
    }
    return -1;
}
*/