/**
 * @file DetermineIfStringHalvesAreAlike.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-12-01
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int solve(string s, int i, int j)
{

    int ans = 0;
    for (int k = i; k <= j; k++)
    {
        if (s[k] == 'a' || s[k] == 'i' || s[k] == 'o' || s[k] == 'e' || s[k] == 'u' || s[k] == 'A' || s[k] == 'E' || s[k] == 'O' || s[k] == 'I' || s[k] == 'U')
        {
            ans++;
        }
    }
    return ans;
}

bool halvesAreAlike(string s)
{
    int n = s.length();
    int a = solve(s, 0, (n / 2) - 1);
    int b = solve(s, n / 2, n - 1);
    if (a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
*/