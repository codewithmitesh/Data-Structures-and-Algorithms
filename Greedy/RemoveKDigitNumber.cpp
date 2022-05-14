/**
 * @file RemoveKDigitNumber.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-07
 *
 * @copyright Copyright (c) 2022
 *
 * MIMP Hard :- https://leetcode.com/problems/remove-k-digits/
 *
 */
/**
string removeKdigits(string num, int k)
{

    stack<char> st;

    for (int i = 0; i < num.size(); i++)
    {

        while (k > 0 && !st.empty() && st.top() > num[i])
        {

            k--;
            st.pop();
        }
        st.push(num[i]);
    }

    // if the order is increasing and we still have positive k then we need to actually pop the stack until k becomes zero ( all numbers in increasing order case we need to remove digits from right )

    if (k > 0)
    {
        while (k--)
        {
            st.pop();
        }
    }

    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());

    // we need to handle a case of leading zeros 0200 must return 200
    // finding the first non zero and taking the substring from it
    int idx = 0;
    bool flag = false;
    for (; idx < ans.size(); idx++)
    {
        if (ans[idx] != '0')
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        return ans.substr(idx, ans.size() - idx);
    }
    else
    {
        return "0"; // if an empty string is given or only 0000 are given the return only 0
    }

    return ans;
}
*/