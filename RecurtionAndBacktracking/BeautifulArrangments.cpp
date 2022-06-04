/**
 * @file BeautifulArrangments.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-17
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 *  Very Easy Rpoblem Solution Just linke Combination 3 but here is
class Solution
{
public:
    int ans = 0;
  void perm(int n, int ind, vector<int> &vis)
    {
        if (ind == n + 1)
        {
            ans++;
            return;
        }

        for (int i = 1; i <= n; i++)
        {
            if (vis[i])
                continue;
            vis[i] = 1;
            if (ind % i == 0 || i % ind == 0)
            {
                 perm(n, ind + 1, vis);
            }
            vis[i] = 0;
        }

    }
    int countArrangement(int n)
    {
        vector<int> vis(n + 1, 0);
        perm(n, 1, vis);
        return ans;
    }
};
*/