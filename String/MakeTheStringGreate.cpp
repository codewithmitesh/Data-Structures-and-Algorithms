/**
 * @file MakeTheStringGreate.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-08
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
string makeGood(string s)
{

    if (s == "")
        return "";

    stack<char> st;
    //   st.push(s[0]);

    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty() == false && st.top() != s[i] && tolower(st.top()) == tolower(s[i]))
        {
            st.pop();
            continue;
        }

        st.push(s[i]);
    }

    string ans = "";
    while (st.empty() == false)
    {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
*/