/**
 * @file flipStringIntoMonotonicIncreasing.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-17
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int minFlipsMonoIncr(string s)
    {

        int noofones = 0, change = 0;
        for (auto c : s)
        {
            if (c == '1')
            {
                // increse the no of ones before current 0
                noofones++;
            }
            else
            {
                // if the current is 0 then two case make all ones till now into 0 or make this 0 into 1
                change++; // make current 0 into 1
                // update the ans with the whichever possiblity gives min result
                change = min(change, noofones);
            }
        }

        return change;
    }
};