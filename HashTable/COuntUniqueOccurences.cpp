/**
 * @file COuntUniqueOccurences.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-30
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool uniqueOccurrences(vector<int> &arr)
{

    unordered_map<int, int> ump;

    for (int i = 0; i < arr.size(); i++)
    {
        ump[arr[i]]++;
    }

    unordered_set<int> uns;
    for (auto i : ump)
    {
        if (uns.find(i.second) != uns.end())
        {
            return false;
        }
        else
        {
            uns.insert(i.second);
        }
    }

    return true;
}
*/