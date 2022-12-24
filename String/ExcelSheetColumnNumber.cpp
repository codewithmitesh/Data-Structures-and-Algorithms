/**
 * @file ExcelSheetColumnNumber.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-12-21
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int titleToNumber(string columnTitle)
{
    int n = columnTitle.size();
    long long temp = 1, ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int val = columnTitle[i] - 'A' + 1;
        ans += temp * val;
        temp *= 26;
    }
    return ans;
}
*/