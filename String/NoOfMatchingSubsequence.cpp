/**
 * @file NoOfMatchingSubsequence.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-20
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int numMatchingSubseq(string s, vector<string> &words)
{
    vector<vector<int>> v(26);
    for (int i = 0; i < s.length(); i++)
    {

        v[s[i] - 'a'].push_back(i);
    }

    int count = 0;
    for (int i = 0; i < words.size(); i++)
    {

        bool isSubsequence = true;
        int lastIndex = -1;
        for (auto w : words[i])
        {
            // to find the upper bound means we are finding the just next index than the lastIndex in the intire vector also upperbound return us the address
            auto it = upper_bound(v[w - 'a'].begin(), v[w - 'a'].end(), lastIndex);
            if (it == v[w - 'a'].end())
            {
                isSubsequence = false;
                break;
            }
            else
            {
                lastIndex = *it; // value of that next index make it now lastIndex
            }
        }
        if (isSubsequence == true)
        {
            count++;
        }
    }
    return count;
}
*/