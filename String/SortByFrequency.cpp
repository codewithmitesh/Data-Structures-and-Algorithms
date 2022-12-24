/**
 * @file SortByFrequency.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-12-03
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
// using bucket sort technique
string frequencySort(string s)
{
    unordered_map<char, int> freq;
    vector<string> bucket(s.size() + 1, "");
    string res;

    // count frequency of each character
    for (char c : s)
        freq[c]++;
    // put character into frequency bucket
    for (auto &it : freq)
    {
        int n = it.second;
        char c = it.first;
        bucket[n].append(n, c);
    }
    // form descending sorted string
    for (int i = s.size(); i > 0; i--)
    {
        if (!bucket[i].empty())
            res.append(bucket[i]);
    }
    return res;
}
*/
/**
 * Using comparator
 *
string frequencySort(string s)
{
    int counts[256] = {0};
    for (char ch : s)
        ++counts[ch];
    sort(s.begin(), s.end(), [&](char a, char b)
         { return counts[a] > counts[b] || (counts[a] == counts[b] && a < b); });
    return s;
}
*/