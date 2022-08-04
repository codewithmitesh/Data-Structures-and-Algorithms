/**
 * @file ReverseInteger.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-08-04
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int reverse(int x)
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int max = INT_MAX; //(2147483647)
    int min = INT_MIN; //(2147483648)

    int rev = 0;
    int digit = 0;

    while (x != 0)
    {
        digit = x % 10;

        if (rev > (max / 10) || (rev == (max / 10) && digit >= max % 10))
        {
            return 0;
        }
        if (rev < (min / 10) || (rev == (min / 10) && digit <= min % 10))
        {
            return 0;
        }

        rev = rev * 10 + digit;
        x = x / 10;
    }

    return rev;
}
*/