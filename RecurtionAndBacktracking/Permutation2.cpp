/**
 * @file Permutation2.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-15
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
// Use Swaap wali approach and store permutations in the set
void helper(int idx, set<vector<int>> &st, vector<int> &nums, int n)
{
    // if our idx reaches to the n then store that vector into set
    if (idx == n)
    {
        st.insert(nums);
        return;
    }

    // now iterating over the given vector size
    // because we need , vector size subsets
    for (int i = idx; i < nums.size(); i++)
    {
        // just swap the values and store them after swaping
        swap(nums[i], nums[idx]);

        helper(idx + 1, st, nums, nums.size());

        // after taking them as a subset again swap them to make them as it is for next iteration
        swap(nums[i], nums[idx]);
    }
}

vector<vector<int>> permuteUnique(vector<int> &nums)
{
    // making a set that will store only unique values
    set<vector<int>> st;

    // it will help in determining the all permutations
    helper(0, st, nums, nums.size());

    // copying all the set values into a 2D vector because our main function return type is 2D vector
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
*/