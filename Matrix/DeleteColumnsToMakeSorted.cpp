/**
 * @file DeleteColumnsToMakeSorted.cpp
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
    int minDeletionSize(vector<string> &strs)
    {
        int n = strs.size(), m = strs[0].size();
        int ans = 0;

        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (strs[i + 1][j] < strs[i][j])
                {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};