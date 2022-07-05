/**
 * @file SymmetricTree.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-02
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
bool Solve(TreeNode *left, TreeNode *right)
{

    if (left == NULL || right == NULL)
    {
        return left == right;
    }

    if (left->val != right->val)
        return false; // root check

    // left :- root left right , right:- root right left
    return Solve(left->left, right->right) && Solve(left->right, right->left);
}

bool isSymmetric(TreeNode *root)
{

    return root == NULL || Solve(root->left, root->right);
}
*/