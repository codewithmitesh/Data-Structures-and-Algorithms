/**
 * @file SortedArraytoBST.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-02
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
TreeNode *sorted(vector<int> &nums, int start, int end)
{
    if (start > end)
        return NULL;

    int mid = (start + end) >> 1;

    TreeNode *root = new TreeNode(nums[mid]);

    root->left = sorted(nums, start, mid - 1);
    root->right = sorted(nums, mid + 1, end);

    return root;
}

TreeNode *sortedArrayToBST(vector<int> &nums)
{
    // int start = 0 , ens = nums.size()-1;
    return sorted(nums, 0, nums.size() - 1);
}
*/