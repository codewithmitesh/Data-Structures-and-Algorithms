/**
 * @file words-within-two-edits-of-dictionary.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-18
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    bool valid(string a, string b)
    {
        bool ans = true;
        int k = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
            {
                k++;
                if (k > 2)
                    return false;
            }
        }

        return ans;
    }
    vector<string> twoEditWords(vector<string> &quer, vector<string> &dict)
    {

        vector<string> ans;

        for (int i = 0; i < quer.size(); i++)
        {

            for (int j = 0; j < dict.size(); j++)
            {

                string a = quer[i], b = dict[j];
                if (valid(a, b))
                {
                    ans.push_back(a);
                    break;
                }
            }
        }

        return ans;
    }
};