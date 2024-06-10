/**
 * @file MinimumImpossbileOr.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-28
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int minImpossibleOR(vector<int> &nums)
    {
        unordered_set<int> uns;
        for (auto &it : nums)
        {
            uns.emplace(it);
        }
        int ans = 1;
        int i = 0;
        while (uns.count(ans))
        {
            ans *= 2;
        }
        return ans;
    }
};