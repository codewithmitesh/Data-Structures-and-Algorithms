/**
 * @file RemoveAllAdjacentDuplicates2.cpp
 * @author
 * @brief
 * @version 0.1
 * @date 2022-05-06
 *
 * @copyright Copyright (c) 2022
 *
 * * Problem Link :- https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/
 *
 */
/**
string removeDuplicates(string s, int k)
{

    int n = s.size();
    if (n < k)
        return s;

    stack<pair<char, int>> st;

    for (int i = 0; i < n; i++)
    {

        if (st.empty() || s[i] != st.top().first)
        {
            st.push({s[i], 1});
        }
        else
        {
            auto temp = st.top();
            st.pop();
            st.push({s[i], temp.second + 1});
        }
        if (st.top().second == k)
        {
            st.pop();
        }
    }

    string ans = "";
    while (!st.empty())
    {
        auto cur = st.top();
        st.pop();
        while (cur.second--)
        {
            ans.push_back(cur.first);
        }
    }
    reverse(ans.begin(), ans.end());

    return ans;
}
*/