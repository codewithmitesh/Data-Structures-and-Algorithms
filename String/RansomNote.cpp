/**
 * @file RansomNote.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-19
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    bool canConstruct(string ran, string mag)
    {
        unordered_map<char, int> ump;
        for (auto it : mag)
        {
            ump[it]++;
        }
        for (auto it : ran)
        {
            if (ump.find(it) != ump.end())
            {
                ump[it]--;
                if (ump[it] == 0)
                {
                    ump.erase(it);
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};