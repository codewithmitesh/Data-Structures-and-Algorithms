/**
 * @file MinimumOperationTOHalveaSmArray.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 */
/** @author Mitesh Tank (codewithmitesh) :- https://linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh , https://twitter.com/codewithmitesh
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh */
/**
#define ll long double
int halveArray(vector<int> &nums)
{
    priority_queue<ll> p;
    ll sum = 0;
    for (auto i : nums)
    {
        p.push((ll)i);
        sum += (ll)i;
    }
    ll reduced = 0;
    ll ans = 0;
    while (reduced < sum / 2)
    {
        ll top = p.top();
        p.pop();
        p.push(top / 2);
        reduced += (top - top / 2);
        ans++;
    }
    return ans;
}
*/