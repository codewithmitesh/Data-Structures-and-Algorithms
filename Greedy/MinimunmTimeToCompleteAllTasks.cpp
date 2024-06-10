/**
 * @file MinimunmTimeToCompleteAllTasks.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-14
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    static bool cmp(vector<int> &tmp)
    {

        int a = tmp[0], b = tmp[1];

        return (b > a);
    }
    int findMinimumTime(vector<vector<int>> &task)
    {

        sort(task.begin(), task.end(), cmp);

        vector<int> tmp(2001, 0);

        for (int i = 0; i < task.size(); i++)
        {
            int dur = task[i][2];
            for (int j = task[i][0]; j <= task[i][1] && dur != 0; j++)
            {
                if (tmp[j] != 0)
                {
                    dur--;
                    tmp[j]++;
                }
            }
            if (dur != 0)
            {
                int end = task[i][1];
                while (dur--)
                {
                    tmp[end]++;
                    end--;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < 2001; i++)
        {
            if (tmp[i] > 1)
                ans++;
        }

        return ans;
    }
};