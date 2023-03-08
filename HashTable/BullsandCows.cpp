/**
 * @file BullsandCows.cpp

 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-02
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    string getHint(string secret, string guess)
    {

        int n = secret.length();
        vector<int> s(10, 0), g(10, 0);
        int bull = 0, cows = 0;
        for (int i = 0; i < n; i++)
        {
            if (secret[i] == guess[i])
            {
                bull++;
            }
            else
            {
                s[secret[i] - '0']++;

                g[guess[i] - '0']++;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            cows += min(s[i], g[i]);
        }
        string ans = "";
        ans += to_string(bull);
        ans += "A";
        ans += to_string(cows);
        ans += "B";
        return ans;
    }
};