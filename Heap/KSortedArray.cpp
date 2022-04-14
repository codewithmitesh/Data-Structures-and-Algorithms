/**
 * @file KSortedArray.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-04-10
 *
 * @copyright Copyright (c) 2022
 *
 * * Also Called Nearly Sorted Array
 *
 */
/**
vector<int> nearlySorted(int arr[], int num, int K)
{

    vector<int> ans;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < num; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > K)
        {
            ans.push_back(pq.top());
            pq.pop();
        }
    }

    while (pq.empty() == false)
    {
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;
}
*/