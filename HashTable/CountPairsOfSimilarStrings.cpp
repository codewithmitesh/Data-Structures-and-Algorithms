/**
 * @file CountPairsOfSimilarStrings.cpp
 * @author Mitesh Tank* @brief
 * @version 0.1
 * @date 2022-12-24
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int similarPairs(vector<string> &words)
{

    unordered_map<string, int> global_ump;
    int ans = 0;
    for (int i = 0; i < words.size(); i++)
    {

        set<char> uns;
        for (int j = 0; j < words[i].size(); j++)
        {

            uns.insert(words[i][j]);
        }

        string temp = "";
        for (auto it : uns)
        {
            temp += it;
        }
        if (global_ump.find(temp) != global_ump.end())
        {
            ans += global_ump[temp];
        }
        global_ump[temp]++;
    }

    return ans;
}
*/