/**
 * @file BaseBallGameLeetcode682.cpp
 * @author Mitesh Tank(codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-04-10
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
int calPoints(vector<string> &ops)
{

    vector<int> v;
    for (int i = 0; i < ops.size(); i++)
    {

        if (ops[i] == "C")
        {
            v.pop_back();
        }
        else if (ops[i] == "D")
        {
            v.push_back(2 * v.back());
        }
        else if (ops[i] == "+")
        {

            int last = v.back();
            v.pop_back();
            int secLast = v.back();
            int sum = last + secLast;
            v.push_back(last);
            v.push_back(sum);
        }
        else
        {
            int temp = stoi(ops[i]);
            v.push_back(temp);
        }
    }
    int ans = 0;
    for (auto it : v)
    {
        ans += it;
    }
    return ans;
}
*/