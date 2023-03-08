/**
 * @file MinimumConsecutiveCardstoPick.cpp
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
    int minimumCardPickup(vector<int> &c)
    {
        int ans = INT_MAX;

        int n = c.size();
        int i = 0;
        unordered_map<int, int> ump;
        for (int j = 0; j < n; j++)
        {
            cout << "Run"
                 << " ";
            ump[c[j]]++;
            while (ump[c[j]] > 1 && i < j)
            {
                ans = min(ans, j - i + 1);
                ump[c[i]]--;
                i++;
            }
        }
        if (ans == INT_MAX)
            return -1;
        return ans;
    }
};