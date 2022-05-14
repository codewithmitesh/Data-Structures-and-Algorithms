/**
 * @file MinimumDeleiontoAvoidRepeatingLetters.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-09
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int minCost(string colors, vector<int> &neededTime)
{
    char c = '*';
    int costprev = 0;
    int ans = 0;
    for (int i = 0; i < colors.size(); i++)
    {
        if (colors[i] == c)
        {
            if (neededTime[i] > costprev)
            {
                ans += costprev;
                c = colors[i];
                costprev = neededTime[i];
            }
            else
            {
                ans += neededTime[i];
            }
        }
        else
        {
            c = colors[i];
            costprev = neededTime[i];
        }
    }
    return ans;
}
*/