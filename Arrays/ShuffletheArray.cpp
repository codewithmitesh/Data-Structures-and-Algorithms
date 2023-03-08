/**
 * @file ShuffletheArray.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "ShuffletheArray.h
class Solution
{
public:
    vector<int> globalCopy;
    vector<int> arr;
    Solution(vector<int> &nums)
    {
        arr = nums;
        globalCopy = nums;
    }

    vector<int> reset()
    {
        arr = globalCopy;
        return arr;
    }

    vector<int> shuffle()
    {

        vector<int> temp = globalCopy;
        int n = arr.size();
        int varn = n;
        for (int i = 0; i < n; i++)
        {
            int eleInd = rand() % varn;
            arr[i] = temp[eleInd];
            temp[eleInd] = temp[varn - 1];
            temp.pop_back();
            varn--;
        }
        return arr;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */