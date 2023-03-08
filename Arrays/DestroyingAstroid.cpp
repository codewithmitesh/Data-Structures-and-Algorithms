/**
 * @file DestroyingAstroid.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-28
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    bool asteroidsDestroyed(int mass, vector<int> &a)
    {
        sort(a.begin(), a.end());
        long long ans = mass;
        // 3 5 9 19 20
        for (int i = 0; i < a.size(); i++)
        {
            if (ans < a[i])
                return false;
            else
                ans += a[i];
        }
        return true;
    }
};