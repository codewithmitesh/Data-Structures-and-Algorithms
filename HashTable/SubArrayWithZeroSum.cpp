/**
 * @file SubArrayWithZeroSum.cpp
 * @author codewithmitesh (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-21
 * 
 * @copyright Copyright (c) 2021
 * 
 * Problem Link:- https://www.geeksforgeeks.org/find-if-there-is-a-subarray-with-0-sum/
 * 
 */
/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh   */
// Solution:-
/**
 * @brief 
 * 
bool subArrayExists(int arr[], int n)
{

    unordered_set<int> uns;
    int pre_sum = 0;
    uns.insert(pre_sum);
    for (int i = 0; i < n; i++)
    {

        pre_sum += arr[i];
        if (uns.find(pre_sum) != uns.end())
        {
            return true;
        }
        else
        {
            uns.insert(pre_sum);
        }
    }

    return false;
}
 * 
 * 
 * 
 * 
 */
