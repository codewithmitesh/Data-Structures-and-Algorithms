/**
 * @file CountDIstinctElementinaWindow.cpp
 * @author codewithmitesh (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-21
 * 
 * @copyright Copyright (c) 2021
 * 
 * Problem Link :- https://www.geeksforgeeks.org/count-distinct-elements-in-every-window-of-size-k/
 * 
 * Solution :-
vector<int> countDistinct(int A[], int n, int k)
{

    vector<int> res;

    unordered_map<int, int> ump;

    for (int i = 0; i < k; i++)
    {
        ump[A[i]]++;
    }
    res.push_back(ump.size());
    for (int i = k; i < n; i++)
    {
        if (ump.find(A[i]) == ump.end())
        {
            ump[A[i]]++;
        }
        else
        {
            ump[A[i]]++;
        }

        if (ump[A[i - k]] > 1)
        {
            ump[A[i - k]]--;
        }
        else
        {
            ump.erase(A[i - k]);
        }
        res.push_back(ump.size());
    }
    return res;
}
 */
/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh   */
