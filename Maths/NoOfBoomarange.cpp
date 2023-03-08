/**
 * @file NoOfBoomarange.cpp
 * @author Mitesh Tank
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
    int numberOfBoomerangs(vector<vector<int>> &p)
    {

        unordered_map<double, int> ump;
        int n = p.size();
        int ans = 0;
        sort(p.begin(), p.end());
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j != i)
                {
                    long long sum = 0;
                    long long dx = p[i][0] - p[j][0];
                    sum += dx * dx;
                    long long dy = p[i][1] - p[j][1];
                    sum += dy * dy;
                    // sum = sqrt(sum);
                    ump[sum]++;
                }
            }

            for (auto it : ump)
            {
                if (it.second > 1)
                {
                    ans += it.second * (it.second - 1);
                }
            }
            ump.clear();
        }

        return ans;
    }
};