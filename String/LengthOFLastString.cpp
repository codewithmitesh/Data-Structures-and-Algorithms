/**
 * @file LengthOFLastString.cpp
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
    int lengthOfLastWord(string s)
    {

        int i = s.length() - 1;
        bool flag = true;
        while (i >= 0 && s[i] == ' ')
        {
            i--;
        }
        int ans = 0;
        while (i >= 0 && s[i] != ' ')
        {
            ans++;
            i--;
        }
        return ans;
    }
};