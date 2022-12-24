/**
 * @file CountWaystoBuildGoodString.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-13
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int distinctAverages(vector<int> &nums)
{

    int n = nums.size();

    priority_queue<int> p1;
    priority_queue<int, vector<int>, greater<int>> p2;

    unordered_set<float> uns;
    for (int i = 0; i < n; i++)
    {

        p1.push(nums[i]);
        p2.push(nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int a = p1.top();
        int b = p2.top();
        float avg = (a + b) / 2.0;
        if (uns.find(avg) == uns.end())
        {
            uns.insert(avg);
        }
        p1.pop(), p2.pop();
    }

    return uns.size();
}
*/