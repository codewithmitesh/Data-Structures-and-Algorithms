/**
 * @file RemoveAllAdjacentDu[icates.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-10
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
string removeDuplicates(string s)
{

    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty() == false && st.top() == s[i])
        {
            st.pop();
            continue;
        }
        else
        {
            st.push(s[i]);
        }
    }

    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
*/