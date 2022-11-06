/**
 * @file LongestStringChain.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-10-28
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool compare(string &s1, string &s2)
{
    if (s1.size() != s2.size() + 1)
        return false;

    int first = 0;
    int second = 0;

    while (first < s1.size())
    {
        if (second < s2.size() && s1[first] == s2[second])
        {
            first++;
            second++;
        }
        else
            first++;
    }
    if (first == s1.size() && second == s2.size())
        return true;
    else
        return false;
}

static bool comp(string &s1, string &s2)
{
    return s1.size() < s2.size();
}

int longestStrChain(vector<string> &words)
{
    int n = words.size();

    // sort the array

    sort(words.begin(), words.end(), comp);
    vector<int> dp(n, 1);

    int maxi = 1;

    for (int i = 0; i <= n - 1; i++)
    {

        for (int prev_index = 0; prev_index <= i - 1; prev_index++)
        {

            if (compare(words[i], words[prev_index]) && 1 + dp[prev_index] > dp[i])
            {
                dp[i] = 1 + dp[prev_index];
            }
        }

        if (dp[i] > maxi)
            maxi = dp[i];
    }
    return maxi;
}
*/