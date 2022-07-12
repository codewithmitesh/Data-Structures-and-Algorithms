/**
 * @file MergeTrees.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-06
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2)
{
    if (root1 == NULL && root2 == NULL)
        return NULL;
    else if (root1 == NULL)
        return root2;
    else if (root2 == NULL)
        return root1;

    int val = root1->val + root2->val;
    TreeNode *root = new TreeNode(val);
    root->left = mergeTrees(root1->left, root2->left);
    root->right = mergeTrees(root1->right, root2->right);

    return root;
}
*/