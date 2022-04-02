/**
 * @file floodfill.cpp
 * @author Mitesh tank
 * @brief
 * @version 0.1
 * @date 2022-04-02
 *
 * LEETCODE Floofill
 * @copyright Copyright (c) 2022
 *
 */
/**
void dfs(int i, int j, vector<vector<int>> &image, int initialColor, int newColor)
{
// declaring no of rows and cols
    int n = image.size();
    int m = image[0].size();
 // Out of Bound Condition
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return;
    }
  // given codition is it is inital color then only chage it
    if (image[i][j] != initialColor)
    {
        return;
    }

    image[i][j] = newColor;

    dfs(i, j + 1, image, initialColor, newColor);
    dfs(i + 1, j, image, initialColor, newColor);
    dfs(i, j - 1, image, initialColor, newColor);
    dfs(i - 1, j, image, initialColor, newColor);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{

    int initialColor = image[sr][sc];

    if (initialColor != newColor)
    {
        dfs(sr, sc, image, initialColor, newColor);
    }

    return image;
}*/