/**
 * @file Apply Bitwise Operations to Make Strings Equal.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-22
 *
 * @copyright Copyright (c) 2023
 *
 */
Apply Bitwise Operations to Make Strings Equal

    class Solution
{
public:
    bool makeStringsEqual(string s, string t)
    {

        int n = s.length();
        int countOne = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                countOne++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && t[i] == '1')
            {

                if (countOne > 0)
                {
                    countOne++;
                }
                else
                {
                    return false;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {

            if (s[i] == '1' && t[i] == '0')
            {
                if (countOne - 1 > 0)
                {
                    countOne--;
                }
                else
                {
                    return false;
                }
            }
        }

        return true;
    }
};