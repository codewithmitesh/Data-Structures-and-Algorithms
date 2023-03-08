/**
 * @file LaxicographicalNumbers.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-03
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    void solve(int i, int n, vector<int> &ans)
    {
        if (i > n)
            return;
        ans.push_back(i);
        for (int j = 0; j <= 9; j++)
        {
            solve(i * 10 + j, n, ans);
        }
    }

    vector<int> lexicalOrder(int n)
    {
        vector<int> ans;
        for (int i = 1; i <= 9; i++)
        {
            solve(i, n, ans);
        }
        return ans;
    }
};