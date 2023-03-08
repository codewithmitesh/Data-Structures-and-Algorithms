/**
 * @file AddNumberWithoutUsing+.cpp
 * @author me
 * @brief
 * @version 0.1
 * @date 2022-12-24
 *
 * @copyright Copyright (c) 2022
 *
 */
/* @author Mitesh Tank (codewithmitesh) :- https://linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh , https://twitter.com/codewithmitesh
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh */
/**
int getSum(int a, int b)
{
    unsigned carry = 0;
    while (b != 0)
    {
        carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}
* /