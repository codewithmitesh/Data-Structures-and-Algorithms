/**
 * @file ReverseVowelsInString.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-11-04
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool isVowel(char &ch)
{
    if (ch == 'a' | ch == 'e' | ch == 'i' | ch == 'o' | ch == 'u' | ch == 'A' | ch == 'E' | ch == 'I' | ch == 'O' | ch == 'U')
    {
        return true;
    }
    return false;
}
string reverseVowels(string s)
{

    int start = 0, end = s.length() - 1;
    while (start < end)
    {

        if (isVowel(s[start]) && isVowel(s[end]))
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
        else if (isVowel(s[start]))
        {
            end--;
        }
        else if (isVowel(s[end]))
        {
            start++;
        }
        else
        {
            start++;
            end--;
        }
    }
    return s;
}
*/