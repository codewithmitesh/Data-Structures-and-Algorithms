/**
 * @file TotalCostTOHireKWorkrs.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
long long totalCost(vector<int> &costs, int k, int candidates)
{

    // here index ki jarror nahi hai

    // 2 priority queue ka use karke karna hai MMMIMP
    priority_queue<int, vector<int>, greater<int>> pq1;
    priority_queue<int, vector<int>, greater<int>> pq2;
    // ans
    long long ans = 0;

    // tow pointers from staring and from end se
    int i = 0, j = costs.size() - 1;

    // loop wintill k becomes 0
    int count = 0;

    while (count < k)
    {

        // fill the first till candi
        while (pq1.size() < candidates && i <= j)
        {
            pq1.push(costs[i++]);
        }
        // fill the second till candi
        while (pq2.size() < candidates && j >= i)
        {
            pq2.push(costs[j--]);
        }

        // make the hold of the both top
        int top1 = INT_MAX, top2 = INT_MAX;
        if (pq1.size() > 0)
        {
            top1 = pq1.top();
        }
        if (pq2.size() > 0)
        {
            top2 = pq2.top();
        }

        // if the both top is same then also take the one with less index
        if (top1 <= top2)
        {
            ans += top1;
            pq1.pop();
        }
        else
        {
            ans += top2;
            pq2.pop();
        }
        count++;
    }

    return ans;
}
*/