/**
 * @file RecoverBSTLeet99.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-04-25
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 *
 *  TreeNode *prev = NULL, *firstMistake = NULL, *SecondMistake = NULL;
void recoverTree(TreeNode *root)
{

    inorder(root);

    swap(firstMistake->val, SecondMistake->val);
}
void inorder(TreeNode *root)
{
    if (root == NULL)
        return;

    inorder(root->left);

    if (firstMistake == NULL)
    {
        if (prev != NULL && prev->val > root->val)
        {
            firstMistake = prev;
            SecondMistake = root;
        }
    }
    else
    {
        if (root->val < SecondMistake->val)
        {
            SecondMistake = root;
        }
    }
    prev = root;

    inorder(root->right);
}

*/