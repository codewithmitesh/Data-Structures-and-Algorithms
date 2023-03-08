/**
 * @file SmallestValueofTHeRearrangedNumber.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 */
class Solution
{
public:
    long long smallestNumber(long long num)
    {

        string s = to_string(num); // Covert number to string

        // if number is -ve, reverse sort the string

        if (s[0] == '-')
        {
            sort(s.begin() + 1, s.end(), greater<char>());
        }

        // for +ve number sort and bring the first non zero number to front

        else
        {
            sort(s.begin(), s.end());
            for (int i = 0; i < s.length(); ++i)
            {
                // just swap the first non zero to the first posisiton means at position 0 and break
                if (s[i] != '0')
                {
                    swap(s[i], s[0]);
                    break;
                }
            }
        }

        long long res = stol(s); // Convert the string to number again

        return res;
    }
};