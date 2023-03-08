/**
 * @file MinimumAdditionToMakeIntegerBeautiful.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-12
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    long long isValid(long long n)
    {
        long long res = 0;
        while (n > 0)
        {
            res += n % 10;
            n /= 10;
        }
        cout << res << " ";
        return res;
    }
    long long makeIntegerBeautiful(long long n, int target)
    {

        long long initNum = n;
        long long i = 1;
        while (isValid(n) > target)
        {
            n = n / 10 + 1; // add carry
            i *= 10;        // increse base jo ki last me add hona
        }
        return n * i - initNum;
    }
};