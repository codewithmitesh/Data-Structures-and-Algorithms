/**
 * @file SimplifyPath.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-04-12
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    string simplifyPath(string path)
    {

        string ans = "", token;

        stringstream ss(path);
        vector<string> tokens;

        while (getline(ss, token, '/'))
        {
            if (token == "." || token == "")
            {
                continue;
            }
            else if (token == "..")
            {
                if (tokens.size() != 0)
                    tokens.pop_back();
            }
            else
            {

                tokens.push_back(token);
            }
        }
        if (tokens.size() == 0)
            return "/";

        for (auto it : tokens)
        {
            ans += '/' + it;
        }

        return ans;
    }
};