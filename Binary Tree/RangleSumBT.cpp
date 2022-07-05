/**
 * @file RangleSumBT.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-02
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief
 *
 * @param root
 * @param l
 * @param h
 * @param res
 */

/**
void solve(TreeNode *root, int l, int h, int &res)
{

    if (root == NULL)
        return;

    solve(root->left, l, h, res);

    if (root->val >= l && root->val <= h)
    {
        res += root->val;
    }

    solve(root->right, l, h, res);
}

int rangeSumBST(TreeNode *root, int low, int high)
{

    int res = 0;
    solve(root, low, high, res);

    return res;
}
*/