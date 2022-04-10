/**
 * @file KLargestElements.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-04-10
 *
 * @copyright Copyright (c) 2022
 *
 * ! K largest elements in an array
 *
 */
/**
 * * TC:- O(NLogK) SC = O(k)
vector<int> kLargest(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    vector<int> ans;
    while (!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
*/