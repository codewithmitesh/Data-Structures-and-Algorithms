/**
 * @file SmallestSumSubarray.cpp
 * @author Mitesh T (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-09-05
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int smallestSumSubarray(vector<int> &a)
{
    // Code here
    int n = a.size();
    int min_till = 0;
    int min_ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        min_till = min(a[i], min_till + a[i]);
        min_ans = min(min_till, min_ans);
    }

    return min_ans;
}
*/