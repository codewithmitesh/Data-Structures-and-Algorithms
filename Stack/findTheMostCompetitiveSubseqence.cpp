/**
 * @file findTheMostCompetitiveSubseqence.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-19
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<int> mostCompetitive(vector<int> &nums, int k)
{

    // i will  use stack here  and push the element in lexograpghical manner
    int temp = nums.size() - k; //   In temp i am storing  the length that i can pop from stack
                                // if we want k length stack  it means that remainig elements will be popped.
    vector<int> ans;            // stack
    for (auto v : nums)         // iterating over all elements
    {
        // if ans size is zero we can't remove anything , while traversing if we find any element smaller
        // than stack top then we will remove stack top
        // here one condition must be followed that we cannot remove elements more than (n-k)..ie temp
        // from stack
        while (ans.size() && ans.back() > v && temp)
        {
            ans.pop_back();
            temp--;
        }
        ans.push_back(v); // if stack top is smaller than nums ie.. v
    }
    // there might be a case that stack contains elements more than k which means temp!=0
    // to handle this edge case we will pop the extra element from stack
    // for example  arr -> 1 2 3 4 5 , k=2;
    // temp = 5-2=3
    // stack elements will be [1 2 3 4 5] after above code execution
    while (temp)
    {
        ans.pop_back();
        temp--;
    }
    return ans; // answer
}
*/