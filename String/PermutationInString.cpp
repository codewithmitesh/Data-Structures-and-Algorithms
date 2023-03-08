/**
 * @file PermutationInString.cpp
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
    bool checkInclusion(string s1, string s2)
    {

        if (s1.size() > s2.size())
        {
            return false;
        }

        vector<int> freq(26, 0);

        for (int i = 0; i < s1.size(); i++)
        {
            freq[s1[i] - 'a']++;
        }
        vector<int> temp(26, 0);
        int i = 0, j = 0;
        while (j < s1.size())
        {
            temp[s2[j] - 'a']++;
            j++;
        }
        while (j < s2.size())
        {
            if (temp == freq)
                return true;
            temp[s2[j] - 'a']++;
            temp[s2[i] - 'a']--;
            j++, i++;
        }
        if (temp == freq)
            return true;

        return false;
    }
};