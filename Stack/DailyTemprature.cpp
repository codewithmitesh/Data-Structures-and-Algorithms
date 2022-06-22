/**
 * @file DailyTemprature.cpp
 * @author Mitesh tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-06-20
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<int> dailyTemperatures(vector<int> &temp)
{

    vector<int> ans;
    int n = temp.size();
    stack<pair<int, int>> st; // element and index

    st.push({-1, 0});

    -for (int i = n - 1; i >= 0; i--)
    {

        while (st.top().first <= temp[i] && st.size() != 1)
        {

            st.pop();
        }

        if (st.top().first == -1)
        {
            ans.push_back(0);
        }
        else
        {

            ans.push_back(st.top().second - i);
        }

        st.push({temp[i], i});
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
*/