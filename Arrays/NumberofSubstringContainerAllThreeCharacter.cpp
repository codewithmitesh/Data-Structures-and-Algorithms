/**
 * @file NumberofSubstringContainerAllThreeCharacter.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2023-01-02
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int numberOfSubstrings(string s)
    {

        int i = 0, j = 0;
        int n = s.length();
        unordered_map<char, int> mp;
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            mp[s[j]] += 1;

            while (mp['a'] and mp['b'] and mp['c']) // while(window is  good)
            {
                ans += 1 + (n - 1 - j);

                // removing first element[means shrinking window from front to form new window]
                mp[s[i]] -= 1;
                i++;
            }
        }
        return ans;
    }
};