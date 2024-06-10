/**
 * @file CountGoodNodeInABinaryTree.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-14
 *
 * @copyright Copyright (c) 2023
 *
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int solve(TreeNode *root, int par)
    {
        if (root == NULL)
            return 0;
        par = max(par, root->val);
        return ((root->val >= par) ? 1 : 0) + solve(root->left, par) + solve(root->right, par);
    }
    int goodNodes(TreeNode *root)
    {
        return solve(root, INT_MIN);
    }
};