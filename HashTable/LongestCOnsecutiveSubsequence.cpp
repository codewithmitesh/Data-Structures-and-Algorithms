/**
 * @file LongestCOnsecutiveSubsequence.cpp
 * @author codewithmitesh (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2021-11-21
 *
 * @copyright Copyright (c) 2021
 *
 * Problem Link :- https://www.geeksforgeeks.org/longest-consecutive-subsequence/
 *
 * Solution :-
int findLongestConseqSubseq(int arr[], int N)
{

    unordered_set<int> uns;
    int res = 0;
    for (int i = 0; i < N; i++)
    {
        uns.insert(arr[i]);
    }

    for (auto x : uns)
    {
        int curr = 1;
        if (uns.find(x - 1) == uns.end())
        {
            while (uns.find(x + curr) != uns.end())
            {
                curr++;
            }
            res = max(curr, res);
        }
    }
    return res;
}
 *
 *
 */
/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh   */
