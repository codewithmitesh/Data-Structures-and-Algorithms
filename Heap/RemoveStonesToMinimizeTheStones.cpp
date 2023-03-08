/**
 * @file RemoveStonesToMinimizeTheStones.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 */
/* @author Mitesh Tank (codewithmitesh) :- https://linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh , https://twitter.com/codewithmitesh
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh */
/**
int minStoneSum(vector<int> &piles, int k)
{

    priority_queue<int> pq;
    for (auto it : piles)
    {
        pq.push(it);
    }

    while (k--)
    {

        int temp = pq.top();

        pq.pop();

        temp -= floor(temp / 2);
        pq.push(temp);
    }

    int ans = 0;
    while (!pq.empty())
    {
        ans += pq.top();
        pq.pop();
    }

    return ans;
}
*/