/**
 * @file Detemineiftwostringareclose.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-12-02
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool closeStrings(string word1, string word2)
{

    if (word1.length() != word2.length())
    {
        return false;
    }
    int n = word1.length();
    // occurence same hai saare characters ki then
    vector<int> temp1(26, 0), temp2(26, 0);
    for (int i = 0; i < n; i++)
    {
        temp1[word1[i] - 'a']++;
        temp2[word2[i] - 'a']++;
    }
    // for(int i = 0;i<n;i++){
    //     if((temp1[i]!=0 && temp2[i]==0) || (temp1[i]==0 &&temp2[i]!=0) ){
    //         return false;
    //     }
    // }

    sort(temp1.begin(), temp1.end());
    sort(temp2.begin(), temp2.end());

    if (set(word1.begin(), word1.end()) != set(word2.begin(), word2.end()))
        return false;
    for (int i = 0; i < 26; ++i)
    {
        if (temp1[i] != temp2[i])
            return false;
    }
    return true;
}
*/