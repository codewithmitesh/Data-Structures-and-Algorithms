/**
 * @file WordBreak.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-12-27
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
map<string, bool> m;
bool wordBreak(string s, vector<string> &wordDict)
{
    // case 1 if the whole string is in the dictionaty return ture
    if (find(wordDict.begin(), wordDict.end(), s) != wordDict.end())
    {
        return true;
    }
    // if we find the ans for this perticular case or recursive call already just return it
    if (m.find(s) != m.end())
        return m[s];
    // string left to handle the left string
    string left = "";
    for (int i = 0; i < s.length(); i++)
    {
        left += s[i];
        // if the left is in dictionary and recrsive call for remainng whic h return true then return true
        if (find(wordDict.begin(), wordDict.end(), left) != wordDict.end() && wordBreak(s.substr(i + 1), wordDict))
        {
            m[s] = true;
            return true;
        }
        // else case me sinmple increase the left
    }

    m[s] = false;
    return false;
}
*/