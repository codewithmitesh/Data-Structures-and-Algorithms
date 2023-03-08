/**
 * @file StringCompression.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-03
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int compress(vector<char> &chars)
    {

        int i = 0, ans = 0;
        while (i < chars.size())
        {
            int len = 1;
            while (i + len < chars.size() && chars[i + len] == chars[i])
            {
                len++;
            }
            chars[ans++] = chars[i];
            if (len > 1)
            {
                for (char c : to_string(len))
                {
                    chars[ans++] = c;
                }
            }
            i += len;
        }
        return ans;
    }
};