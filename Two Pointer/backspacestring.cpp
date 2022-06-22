/**
 * @file backspacestring.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-06-17
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool backspaceCompare(string s, string t)
{

    // Traverse from right to left in both simultaneously

    int i = s.length() - 1;
    int j = t.length() - 1;

    int deletion = 0;
    while (true)
    {

        // process first string first and count all  hash and delete its elementes wrt to that hash also

        deletion = 0;
        while (i >= 0 && (deletion > 0 || s[i] == '#'))
        {
            if (s[i] == '#')
                deletion++;
            else
                deletion--;
            i--;
        }

        // process Second string first and count all  hash and delete its elementes wrt to that hash also
        deletion = 0;
        while (j >= 0 && (deletion > 0 || t[j] == '#'))
        {
            if (t[j] == '#')
                deletion++;
            else
                deletion--;
            j--;
        }
        // if both element are same then ignore it and Continue traversing else break bcz not simillar
        if (i >= 0 & j >= 0 && deletion == 0 && s[i] == t[j])
            i--, j--;
        else
            break;
    }
    // last me both string pointers -1 par pahochse j so handle that case also
    if (i == -1 && j == -1)
        return true;
    return false;
}
*/