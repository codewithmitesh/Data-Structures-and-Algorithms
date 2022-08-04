/**
 * @file WordsSubsets.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-02
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
// subset function:- checking if s2 is subset of s1 or not
bool subset(vector<int> &s1, vector<int> &s2)
{
    // to check for subset if s2[i]>s1[i] is happpen that means its freq is more it means the
    for (int i = 0; i < 26; i++)
    {
        if (s2[i] > s1[i])
            return false;
    }
    return true;
}
vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
{

    // ans string to store the ans
    vector<string> ans;
    // store the freq of char in this vector but for multiple  occurence of same char in multipe string we need to store the maximum freq of that char
    vector<int> freq_of_words2(26, 0);
    // traversing in each string of word1
    for (auto s : words2)
    {
        // temp_freq to store the freq of current string
        vector<int> temp_freq(26, 0);
        // in each string traverse in each char and mark its freq in temp_freq and mark its maximum freq in fre_of_words2
        for (auto c : s)
        {

            temp_freq[c - 'a']++;
            freq_of_words2[c - 'a'] = max(temp_freq[c - 'a'], freq_of_words2[c - 'a']);
        }
    }
    // traverse in vector 1 and for each string calculate its freq array and see if it is subset of the our freq_of_words2 or nor
    for (auto s : words1)
    {
        vector<int> temp_words1(26, 0);
        // counting the fre of current string
        for (auto c : s)
        {
            temp_words1[c - 'a']++;
        }
        // checking if current freq count is subset of freq_of_words or not if yes then push current striing into ans
        if (subset(temp_words1, freq_of_words2))
        {
            ans.push_back(s);
        }
    }

    return ans;
}
*/