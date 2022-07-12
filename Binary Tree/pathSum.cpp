/**
 * @file pathSum.cpp
 * @author Mitesh tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-09
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool Solve(TreeNode *root, int tsum)
{

    if (root == NULL)
        return false;
    if (root->left == NULL && root->right == NULL)
    {
        if (root->val == tsum)
            return true;
        else
            return false;
    }
    return Solve(root->left, tsum - (root->val)) || Solve(root->right, tsum - (root->val));
}

bool hasPathSum(TreeNode *root, int targetSum)
{
    return Solve(root, targetSum);
}
*/