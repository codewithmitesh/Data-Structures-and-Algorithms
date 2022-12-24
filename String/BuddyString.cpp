/**
 * @file BuddyString.cpp
 * @author Mitesh T (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-12-02
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool buddyStrings(string s, string goal)
{
    // handle the not equal length issue
    if (s.length() != goal.length())
        return false;
    int n = s.length();
    if (s == goal)
    {

        unordered_set<char> uns;
        for (int i = 0; i < n; i++)
        {
            if (uns.find(s[i]) != uns.end())
            {
                return true;
            }
            else
            {
                uns.insert(s[i]);
            }
        }
        return false;
    }

    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != goal[i])
        {
            temp.push_back(i);
        }
    }
    if (temp.size() == 2 && s[temp[0]] == goal[temp[1]] && s[temp[1]] == goal[temp[0]])
    {
        return true;
    }
    return false;
}
*/