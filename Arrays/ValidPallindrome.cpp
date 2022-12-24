/**
 * @file ValidPallindrome.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-12-20
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool isPalindrome(string s)
{
    int len = s.length();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int l = 0, r = len - 1;
    while (l < r)
    {
        while (l < r && !isalnum(s[l]))
            l++;
        while (l < r && !isalnum(s[r]))
            r--;
        if (l < r && s[l++] != s[r--])
            return 0;
    }
    return 1;
}
*/