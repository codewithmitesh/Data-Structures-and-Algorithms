/**
 * @file LargestNumber.cpp
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
static bool cmp(int a, int b)
{

    // string a1 = to_string(a),b1 = to_string(b);
    // string c = a1+b1;
    // string d = b1+a1;
    // if(c>d){
    //     return a>b;
    // }else{
    //     return b>a;
    // }
    return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}
string largestNumber(vector<int> &nums)
{

    sort(nums.begin(), nums.end(), cmp);
    string ans = "";
    for (int i = 0; i < nums.size(); i++)
    {
        ans += to_string(nums[i]);
    }
    return ans[0] == '0' ? "0" : ans;

    return ans;
}
*/