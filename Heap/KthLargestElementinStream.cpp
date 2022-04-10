/**
 * @file KthLargestElementinStream.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-04-10
 *
 * @copyright Copyright (c) 2022
 *
 * ! For largest And Smallest We need to strictly maintain the size of heap to K
 *
 */
/**
void kthLargest(int arr[], int n, int k)
{

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {

        pq.push(arr[i]);
        if (pq.size() < k)
        {
            cout << -1 << " ";
            continue;
        }
        else if (pq.size() > k)
        {
            pq.pop();
        }

        cout << pq.top() << " ";
    }
}
*/