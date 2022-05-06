/**
 * @file BackSpaceCompare.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-01
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool backspaceCompare(string s, string t)
{

    int i = s.length() - 1;
    int j = t.length() - 1;

    // loop(true)
    // executed backsapces if present from end of remaining portion of string s
    // executed backsapces if present from end of remaining portion of string t
    //  compare characters; break if not equal

    int deletion = 0;
    while (true)
    {
        deletion = 0;
        while (i >= 0 && (deletion > 0 || s[i] == '#'))
        {
            if (s[i] == '#')
                deletion++;
            else
                deletion--;
            i--;
        }

        deletion = 0;
        while (j >= 0 && (deletion > 0 || t[j] == '#'))
        {
            if (t[j] == '#')
                deletion++;
            else
                deletion--;
            j--;
        }

        if (i >= 0 & j >= 0 && deletion == 0 && s[i] == t[j])
            i--, j--;
        else
            break;
    }

    if (i == -1 && j == -1)
        return true;
    return false;
}

*/