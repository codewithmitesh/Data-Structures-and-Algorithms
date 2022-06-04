/**
 * @file LongestSubarrayWithZeroSum.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-19
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int maxLen(vector<int> &A, int n)
{

    unordered_map<int, int> ump;

    int res = 0;
    // corner case :- When sum becomes 0 then means it can contain all the zero sum together
    // case -1 1 -1 1 this case presum becomes zero and it increases the length of the subarray
    // so we just need to initially insert{0,-1}
    // to handle this cases

    ump[0] = -1;
    int presum = 0;
    for (int i = 0; i < n; i++)
    {
        presum += A[i];
        if (ump.find(presum) != ump.end())
        {
            res = max(res, i - ump[presum]);
        }
        else
        {
            ump[presum] = i;
        }
    }
    return res;
}
*/