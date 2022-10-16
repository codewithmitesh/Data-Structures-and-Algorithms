/**
 * @file MinimumSumAbsoluteDiffrence.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-09-06
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
long long findMinSum(vector<int> &A, vector<int> &B, int N)
{

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    long long ans = 0;
    for (int i = 0; i < A.size(); i++)
    {

        ans += abs(A[i] - B[i]);
    }
    return ans;
}
*/