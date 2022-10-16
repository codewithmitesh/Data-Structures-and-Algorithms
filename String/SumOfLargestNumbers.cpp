/**
 * @file SumOfLargestNumbers.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-20
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
string findSum(string X, string Y)
{
    string ans = "";
    int i = X.size() - 1, j = Y.size() - 1;

    int c = 0;
    // traverse in both simultaniously
    while (i >= 0 and j >= 0)
    {
        int t = X[i] - '0' + Y[j] - '0' + c;
        ans += to_string(t % 10);
        c = t / 10;
        i--;
        j--;
    }
    // traverse i till the it ends
    while (i >= 0)
    {
        int t = X[i] - '0' + c;
        ans += to_string(t % 10);
        c = t / 10;
        i--;
    }
    // traverse the j till it ends aand update in sting
    while (j >= 0)
    {
        int t = Y[j] - '0' + c;
        ans += to_string(t % 10);
        c = t / 10;
        j--;
    }

    if (c != 0)
        ans += to_string(c);

    // get rid of all leading zeros
    while (ans.size() > 0 and ans.back() == '0')
        ans.pop_back();

    if (ans.size() == 0)
        return "0";

    reverse(ans.begin(), ans.end());
    return ans;
}
*/