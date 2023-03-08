/**
 * @file MAximumEnemyforrts.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-12-24
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
int captureForts(vector<int> &forts)
{

    int n = forts.size();
    int ans = 0;
    // traverse left to right
    for (int i = 0; i < n; i++)
    {

        int ct = 0;

        if (forts[i] == 1)
        {
            int j = i + 1;

            while (j < n && forts[j] == 0)
            {
                ct++;
                j++;
            }

            if (j < n && forts[j] == -1)
            {
                ans = max(ans, ct);
            }
        }
    }
    // now traverse right to left
    for (int i = n - 1; i >= 0; i--)
    {
        int ct = 0;
        if (forts[i] == 1)
        {
            int j = i - 1;
            while (j >= 0 && forts[j] == 0)
            {
                ct++;
                j--;
            }
            if (j >= 0 && forts[j] == -1)
            {
                ans = max(ans, ct);
            }
        }
    }
    return ans;
}

*/