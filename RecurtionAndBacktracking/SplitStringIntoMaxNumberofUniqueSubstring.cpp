/**
 * @file SplitStringIntoMaxNumberofUniqueSubstring.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-27
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    void solve(int ind, string s, int &res, set<string> uns)
    {
        if (ind == s.size())
        {
            int size = uns.size();
            res = max(res, size);
            return;
        }
        string temp = "";
        for (int i = ind; i < s.size(); i++)
        {
            temp += s[i];
            if (uns.find(temp) == uns.end())
            {
                uns.insert(temp);
                solve(i + 1, s, res, uns);
                uns.erase(temp);
            }
        }
    }
    int maxUniqueSplit(string s)
    {

        int res = INT_MIN;
        set<string> uns;
        solve(0, s, res, uns);
        return res;
    }
};