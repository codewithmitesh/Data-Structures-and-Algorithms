/**
 * @file RewardTopKStrudents.cpp
 * @author Mitesh Tank (codewithmitesh )
 * @brief
 * @version 0.1
 * @date 2022-12-26
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
static bool comp(pair<int, int> &a, pair<int, int> &b)
{
    //custom comparator hai ye ki baaki time first bada ho usse usse sort kare and if do first same hai toh simple dekho second jiska chhota usko lo
    return (a.first != b.first ? a.first > b.first : a.second < b.second);
}

vector<int> topStudents(vector<string> &positive_feedback, vector<string> &negative_feedback, vector<string> &report, vector<int> &student_id, int k)
{

    vector<vector<string>> words;
    int n = student_id.size();

    unordered_map<string, int> mp;

    for (auto a : positive_feedback)
        mp[a] = 3;

    for (auto a : negative_feedback)
        mp[a] = -1;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {

        string s = report[i];

        // this is to store the whole string and doing the operation word by word
        stringstream ss(s);

        vector<string> tokens;
        string temp_str;
        // to store the score of each sentence
        int score = 0;
        // ss means sentence , tempstr means each word ko store karne ke liye temp strin, ' ' means space se divide karke
        while (getline(ss, temp_str, ' '))
            score += mp[temp_str];

        v.push_back({score, student_id[i]});
    }

    sort(v.begin(), v.end(), comp);

    vector<int> ans;
    for (int i = 0; i < k; i++)
        ans.push_back(v[i].second);

    return ans;
}
*/