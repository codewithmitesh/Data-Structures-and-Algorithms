/**
 * @file laststoneweightLT1046.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-04-07
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int lastStoneWeight(vector<int> &stones)
{

    priority_queue<int> pq;
    for (auto it : stones)
    {
        pq.push(it);
    }

    while (pq.size() > 1)
    {

        int stone1 = pq.top();
        pq.pop();
        int stone2 = pq.top();
        pq.pop();
        if (stone1 != stone2)
        {
            pq.push(abs(stone1 - stone2));
        }
    }
    if (pq.size() == 0)
    {
        return 0;
    }
    else
    {
        return pq.top();
    }
}
*/