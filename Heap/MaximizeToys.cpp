/**
 * @file MaximizeToys.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-04-10
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int toyCount(int N, int K, vector<int> arr)
{
    priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
    int count = 0;
    while (pq.empty() == false)
    {

        K = K - pq.top();
        pq.pop();
        if (K >= 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}
*/