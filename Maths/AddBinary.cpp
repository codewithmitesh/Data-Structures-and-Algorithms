/**
 * @file AddBinary.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-04
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
string addBinary(string a, string b)
{

    int i = a.length() - 1, j = b.length() - 1;
    string ans = "";
    int x, y;
    int carry = 0;
    while (i >= 0 || j >= 0)
    {

        if (i < 0)
        {

            x = 0;
        }
        else
        {
            x = a[i] - '0';
        }

        if (j < 0)
        {
            y = 0;
        }
        else
        {
            y = b[j] - '0';
        }

        int sum = x + y + carry;

        ans = to_string(sum % 2) + ans;

        carry = sum / 2;

        i--;
        j--;
    }
    // if there is still 1 carry left then this need to do
    if (carry > 0)
    {
        ans = '1' + ans;
    }
    return ans;
}
*/