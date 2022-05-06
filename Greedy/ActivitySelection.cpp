/**
 * @file ActivitySelection.cpp
 * @author Mitesh Tank (Codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-04-26
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
static bool com(pair<int, int> a, pair<int, int> b)
{

    return a.second < b.second;
}
input is Given with teo Diffrent arrays of start and end
public:
// Function to find the maximum number of activities that can
// be performed by a single person.
int activitySelection(vector<int> start, vector<int> end, int n)
{
    vector<pair<int, int>> ans;
    for (int i = 0; i < start.size(); i++)
    {
        ans.push_back({start[i], end[i]});
    }

    sort(ans.begin(), ans.end(), com);
    int res = 1;

    pair<int, int> prev = ans[0];

    for (int i = 1; i < ans.size(); i++)
    {

        pair<int, int> currPair = ans[i];

        if (currPair.first <= prev.second || currPair.second <= prev.second)
        {
            continue;
        }
        prev = currPair;
        res++;
    }

    return res;
}
*/