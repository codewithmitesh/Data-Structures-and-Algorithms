/**
 * @file INcreasingOrderSearchTree.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-04-17
 *
 * @copyright Copyright (c) 2022
 * Leetcode 897
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
/**
class Solution
{
public:
    TreeNode *result;
    TreeNode *pre;
    TreeNode *increasingBST(TreeNode *root)
    {

        inorder(root);
        return result;
    }

    void inorder(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left);
        if (result == NULL)
        {
            result = root;
        }
        else
        {
            pre->right = root;
        }
        pre = root;
        root->left = NULL;
        inorder(root->right);
    }
};
**/