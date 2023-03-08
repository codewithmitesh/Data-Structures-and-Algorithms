/**
 * @file MaxPointsOnAlIne.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-06
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int maxPoints(vector<vector<int>> &p)
    {

        int n = p.size(), res = 2;
        if (n == 1)
            return 1;
        sort(p.begin(), p.end());
        unordered_map<double, int> cnt;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j != i)
                {
                    cnt[atan2(p[j][1] - p[i][1], p[j][0] - p[i][0])]++;
                }
            }
            for (auto it : cnt)
            {
                res = max(res, it.second + 1);
            }
            cnt.clear();
        }
        return res;
    }
};