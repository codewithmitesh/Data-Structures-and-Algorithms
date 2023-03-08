/**
 * @file FindAllAnagramStrings.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-02-04
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {

        vector<int> ans;
        if (p.size() > s.size())
        {
            return ans;
        }
        vector<int> freq(26, 0);

        for (int i = 0; i < p.size(); i++)
        {
            freq[p[i] - 'a']++;
        }
        vector<int> temp(26, 0);
        int i = 0, j = 0;
        while (j < p.size())
        {
            temp[s[j] - 'a']++;
            j++;
        }
        while (j < s.size())
        {
            if (temp == freq)
            {
                ans.push_back(i);
            }
            temp[s[j] - 'a']++;
            temp[s[i] - 'a']--;
            j++, i++;
        }
        if (temp == freq)
        {
            ans.push_back(i);
        }

        return ans;
    }
};