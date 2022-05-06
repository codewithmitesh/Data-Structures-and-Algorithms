/**
 * @file JobSequencingProblem.cpp
 * @author Mitesh Tanks (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-06
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
static bool myCom(Job a, Job b)
{
    return a.profit > b.profit;
}

// Function to find the maximum profit and the number of jobs done.
vector<int> JobScheduling(Job arr[], int n)
{

    sort(arr, arr + n, myCom);
    // array to maintain a track if the job is done or not for that slot
    bool done[n] = {0};
    int day = 0, profit = 0;

    for (int i = 0; i < n; i++)
    {
                    // if end time of job is more than n then it cant considered so min(n,)
        for (int j = min(n, arr[i].dead - 1); j >= 0; j--)
        {
           // if no job is done in that slot then do it and update the profit else skip it
            if (done[j] == false)
            {
                day += 1;
                profit += arr[i].profit;
                done[j] = true;
                break;
            }
        }
    }
    vector<int> ans;
    ans.push_back(day);
    ans.push_back(profit);
    return ans;
}
*/