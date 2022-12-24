/**
 * @file CountBits.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-07
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<int> countBits(int n)
{
    vector<int> ans(n + 1);
    ans[0] = 0;

    for (int i = 1; i < n + 1; i++)
        ans[i] = ans[i / 2] + i % 2;

    return ans;
}
*/