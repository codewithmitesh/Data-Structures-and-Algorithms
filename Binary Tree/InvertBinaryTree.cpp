/**
 * @file InvertBinaryTree.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-06-04
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
void dfs(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    TreeNode *l = root->left;
    TreeNode *r = root->right;
    root->left = r;
    root->right = l;
    // swap(root->left,root->right);
    dfs(root->left);
    dfs(root->right);
}
TreeNode *invertTree(TreeNode *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    dfs(root);
    return root;
}
*/