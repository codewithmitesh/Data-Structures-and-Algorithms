/**
 * @file MaximumBagsWithFullCapacityOfRocks.cpp
 * @author your name (you@domain.com)
 *
 * @brief
 * @version 0.1
 * @date 2022-12-27
 *
 * @copyright Copyright (c) 2022
 *
 */
/** @author Mitesh Tank (codewithmitesh) :- https://linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh , https://twitter.com/codewithmitesh
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh */

/**
int maximumBags(vector<int> &c, vector<int> &r, int a)
{

    vector<int> temp;
    for (int i = 0; i < c.size(); i++)
    {

        temp.push_back(c[i] - r[i]);
    }
    sort(temp.begin(), temp.end());
    int ans = 0;
    for (int i = 0; i < temp.size(); i++)
    {
        if ((a - temp[i]) >= 0)
        {
            a -= temp[i];
            ans++;
        }
        else
        {
            break;
        }
    }
    return ans;
}
*/