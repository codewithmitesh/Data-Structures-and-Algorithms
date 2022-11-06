/**
 * @file GenerateParanthesis.cpp
 * @author Mitesh T (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-05
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<string> ans;
// ob = no of open brackets , cb = no of closed brackets
void solve(string &temp, int ob, int cb, int n)
{

    if (temp.size() == 2 * n)
    {
        ans.push_back(temp);
        return;
    }

    // now if the no of Openning brackets are less than n then only we will add the ob
    // here ob<n because we are starting with 0
    if (ob < n)
    {
        temp.push_back('(');
        solve(temp, ob + 1, cb, n);
        temp.pop_back();
    }

    // if the no of Ob is less than cb then only we will add cb to create valid
    if (ob > cb)
    {
        temp.push_back(')');
        solve(temp, ob, cb + 1, n);
        temp.pop_back();
    }
}

vector<string> generateParenthesis(int n)
{

    string temp = "";

    solve(temp, 0, 0, n);

    return ans;
}
*/