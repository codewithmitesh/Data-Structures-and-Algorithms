/**
 * @file MaximumNoofPointsyoucanget.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-25
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int maxCoins(vector<int> &p)
    {
        sort(p.begin(), p.end(), greater<int>());
        int n = p.size(), k = p.size() / 3;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                continue;
            if (k == 0)
                break;
            ans += p[i];
            k--;
        }
        return ans;
    }
};