/**
 * @file LongestSubarrayWithGivenSum.cpp
 * @author codewithmitesh (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-21
 * 
 * @copyright Copyright (c) 2021
 * Problem Link :-  https://www.geeksforgeeks.org/longest-sub-array-sum-k/
 * 
 *  Solution :-  
 * 
int lenOfLongSubarr(int A[], int N, int K)
{

    unordered_map<int, int> ump;

    int res = 0;

    int presum = 0;
    for (int i = 0; i < N; i++)
    {
        presum += A[i];

        if (presum == K)
            res = i + 1;
        if (ump.find(presum) == ump.end())
        {
            ump.insert({presum, i});
        }
        if (ump.find(presum - K) != ump.end())
        {
            res = max(res, i - ump[presum - K]);
        }
    }
    return res;
}
*
 */
/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh   */
