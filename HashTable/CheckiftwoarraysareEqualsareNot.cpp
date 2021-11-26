/**
 * @file CheckiftwoarraysareEqualsareNot.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 * Problem Link :- https://www.geeksforgeeks.org/check-if-two-arrays-are-equal-or-not/
 * Solution :-
bool check(vector<ll> A, vector<ll> B, int N)
{

    unordered_map<int, int> ump;

    for (int i = 0; i < N; i++)
    {
        ump[A[i]]++;
    }

    for (int i = 0; i < N; i++)
    {

        if (ump.find(B[i]) != ump.end())
        {
            ump[B[i]]--;
            if (ump[B[i]] == 0)
                ump.erase(B[i]);
        }
        else
        {
            return false;
        }
    }
    return ump.empty();
}
 * 
 */
/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh   */