/**
 * @file ReOrganizeString.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-19
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
string reorganizeString(string s)
{

    unordered_map<char, int> ump;
    for (int i = 0; i < s.length(); i++)
    {
        ump[s[i]]++;
    }
    priority_queue<pair<int, char>> pq;

    for (auto it : ump)
    {

        pq.push({it.second, it.first});
    }
    string ans = "";
    // idea :- take only first 2 most frequent and then arrange them until we reach only one remaining pair in pq
    // we left one pair at last to check whether there is more character remaining at last
    while (pq.size() > 1)
    {

        auto p1 = pq.top();
        pq.pop();

        auto p2 = pq.top();
        pq.pop();

        ans += p1.second;
        ans += p2.second;

        p1.first -= 1;
        p2.first -= 1;

        if (p1.first > 0)
        {
            pq.push(p1);
        }

        if (p2.first > 0)
        {
            pq.push(p2);
        }
    }

    // case when a= 10 ,b=1,c=1 is there then we first need to check whether the remaining pairs freq is less or equal to 1 or not if not then we need to return empty string bcz it ans cant be possible to arrange the string
    if (pq.size() > 0)
    {
        if (pq.top().first > 1)
        {
            return "";
        }
        else
        {
            ans += pq.top().second;
        }
    }

    return ans;
}
*/