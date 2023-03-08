/**
 * @file FactorialTrailingZeros.cpp
 * @author your name (you@domain.com)
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
    int trailingZeroes(int n)
    {

        int res = 0;
        for (int i = 5; i <= n; i = i * 5)
        {
            res = res + (n / i);
        }
        return res;
    }
};