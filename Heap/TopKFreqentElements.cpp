/**
 * @file TopKFreqentElements.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-04-09
 *
 * @copyright Copyright (c) 2022
 *
 */
/** O(nlogn) time complexity :- O(n) + O(n) space complexity
vector<int> topKFrequent(vector<int> &nums, int k)
{
    vector<int> v;
    unordered_map<int, int> ump;
    for (auto it : nums)
    {
        ump[it]++;
    }

    priority_queue<pair<int, int>> pq;
    for (auto it : ump)
    {
        pq.push({it.second, it.first});
    }

    while (k--)
    {
        pair<int, int> temp;
        temp = pq.top();
        pq.pop();

        v.push_back(temp.second);
    }
    return v;
}
*/
/**
 * * Approach using Bucket Sort Technique
 * TC:- O(N) and SC :- O(N) + O(N)

vector<int> topKFrequent(vector<int> &nums, int k)
{
    // * Creating the Unorderd Map top store the Frequency
    unordered_map<int, int> counts;
    for (auto i : nums)
        ++counts[i];
    // * Creating the Bucket Vector of Size n+1
    vector<vector<int>> buckets(nums.size() + 1);
    //* Puting the elements in the buckets
    for (auto &k : counts)
        buckets[k.second].push_back(k.first);
    //* Instead of traversing from end to start we are reversing bucket vecotr
    reverse(begin(buckets), end(buckets));

    vector<int> res;
    /// we are taking the top k elements from the bucket
    for (auto &bucket : buckets)
        for (auto i : bucket)
        {
            res.push_back(i);
            //* If our result vector becomes k sized then stop
            if (res.size() == k)
                return res;
        }

    return res;
}
*/