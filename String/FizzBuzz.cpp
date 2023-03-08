/**
 * @file FizzBuzz.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {

        vector<string> ans;
        for (int i = 1; i <= n; i++)
        {
            if (i % 15 == 0)
            {

                ans.push_back("FizzBuzz");
            }
            else if (i % 5 == 0)
            {
                ans.push_back("Buzz");
            }
            else if (i % 3 == 0)
            {
                ans.push_back("Fizz");
            }
            else
            {
                ans.push_back(to_string(i));
            }
        }

        return ans;
    }
};
*/