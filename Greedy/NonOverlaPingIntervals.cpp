/**
 * @file NonOverlaPingIntervals.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-09
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool static comp(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1];
}
int eraseOverlapIntervals(vector<vector<int>> &intervals)
{

    sort(intervals.begin(), intervals.end(), comp);

    int cnt = 0;
    int prev = intervals[0][1];
    for (int i = 1; i < intervals.size(); i++)
    {

        if (intervals[i][0] >= prev)
        {
            prev = intervals[i][1];
        }
        else
        {
            cnt++;
        }
    }
    return cnt;
}
*/