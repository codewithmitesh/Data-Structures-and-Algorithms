/**
 * @file Powxn.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 */
class Solution
{
public:
    double myPow(double x, int n)
    {

        double ans = 1.00000;
        // long long to handle the
        long long n1 = n;
        // ab long long le hi liya toh positive ke liye bhi use karletew
        if (n1 < 0)
            n1 = -1 * n1;

        while (n1 > 0)
        {
            // if even then simple half karo and x ko multiply karo
            if (n1 % 2 == 0)
            {
                x = x * x;
                n1 = n1 / 2;
            }
            else
            {
                // odd ke liye ans me add karo and simply power ko ek reduce karo
                ans = ans * x;
                n1 = n1 - 1;
            }
        }
        if (n < 0)
            return (double)(1.00000 / (double)ans);
        return (double)ans;
    }
};