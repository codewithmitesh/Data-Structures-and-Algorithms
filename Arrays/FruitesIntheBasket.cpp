/**
 * @file FruitesIntheBasket.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-23
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int totalFruit(vector<int> &s)
    {

        // sliding window technique
        int i = 0, j = 0;
        int n = s.size();
        int ans = 0, ws = 0;
        unordered_map<int, int> ump;
        while (j < n)
        {
            ump[s[j]]++;
            ws++;
            while (ump.size() > 2)
            {
                // ans--;
                ump[s[i]]--;
                if (ump[s[i]] == 0)
                {
                    ump.erase(s[i]);
                }
                ws--;
                // ans = max(ans,ws);
                i++;
            }
            ans = max(ans, ws);
            j++;
        }
        return ans;
    }
};