/**
 * @file RestoreAnIPAdress.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-21
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    vector<string> restoreIpAddresses(string s)
    {
        // res means ans store karee return wala
        vector<string> res;
        // temp string to hold the temp generated stirng
        string temp;
        // call the backtraking function
        dfs(res, s, temp, 0, 0);
        // return thr result
        return res;
    }
    void dfs(vector<string> &res, string s, string temp, int idx, int part)
    {
        // if the part is more than 4 return
        if (part > 4)
            return;
        // base case if part is exectly 4 and ind is reached end means all traversed
        if ((part == 4) && (idx == s.size()))
        {
            // erase the last
            temp.erase(temp.end() - 1);
            // update the ans and return
            res.push_back(temp);
            return;
        }
        // now for each go for 3 rounds
        for (int i = 1; i < 4; ++i)
        {
            // if the ind is 0 then we can take only one round
            if (s[idx] == '0' && i > 1)
                return;
            // if out of bound jaara return
            if (idx + i > s.size())
                return;
            // get the num and
            auto num = s.substr(idx, i);
            // check if valid hai by
            if (stoi(num) < 256)
            {
                // recursion call for
                // temp me num + . add karo
                // ind me i daalo
                // part ko increse by one
                dfs(res, s, temp + num + ".", idx + i, part + 1);
            }
            else
            {
                // baki saare case ke liye return
                return;
            }
        }
    }
};