/**
 * @file CountWaystoGroupOverlappingRanges.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-17
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    const int mod = 1000000007;

    static bool cmp(vector<int> &a, vector<int> &b)
    {
        return a[1] < b[1];
    }
    int countWays(vector<vector<int>> &a)
    {

        sort(a.begin(), a.end());

        for (int i = 1; i < a.size(); i++)
        {
            if ((a[i][0] <= a[i - 1][1]))
            {
                cout << "run"
                     << " ";
                a[i - 1] = {};
                a[i][0] = min(a[i][0], a[i - 1][0]);
                a[i][1] = max(a[i][1], a[i - 1][1]);
            }
        }
        long long sum = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (!a[i].empty())
            {
                sum++;
            }
        }

        cout << sum << " ";
        long long ans = 1;
        for (int i = 0; i < sum; i++)
        {
            ans = (ans * 2) % 1000000007;
        }
        return (int)ans;
        // && (a[i][0]>=a[i-1][0])
    }
};