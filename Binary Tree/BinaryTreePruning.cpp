/**
 * @file BinaryTreePruning.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-09-06
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool solve(TreeNode *root)
{

    if (root == NULL)
        return false;

    bool leftTemp = solve(root->left);
    if (leftTemp == false)
    {
        delete (root->left);
        root->left = NULL;
    }

    bool rightTemp = solve(root->right);
    if (rightTemp == false)
    {
        delete (root->right);
        root->right = NULL;
    }

    if (leftTemp == false and rightTemp == false)
    {
        if (root->val == 1)
            return true;
        else
            return false;
    }
    else
    {
        return true;
    }
}
TreeNode *pruneTree(TreeNode *root)
{

    bool temp = solve(root);
    if (temp == true)
        return root;
    else
        return NULL;
}

*/