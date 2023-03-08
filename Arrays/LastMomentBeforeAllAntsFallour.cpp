/**
 * @file LastMomentBeforeAllAntsFallour.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-28
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int getLastMoment(int n, vector<int> &left, vector<int> &right)
    {

        int ans = 0;

        int res = 0;
        for (int i = 0; i < left.size(); i++)
        {
            ans = max(ans, left[i]);
        }
        res = ans;
        ans = INT_MAX;
        for (int i = 0; i < right.size(); i++)
        {

            ans = min(ans, right[i]);
        }
        cout << res << " " << ans;
        // if(ans==0) return 0;
        return max(res, n - ans);
    }
};