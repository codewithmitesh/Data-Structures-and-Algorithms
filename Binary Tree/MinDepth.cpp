/**
 * @file MinDepth.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int minDepth(TreeNode *root)
{
    // Min depth is simply depth or Height but with the minimum value
    if (root == NULL)
    {
        return 0;
    }
    else if (root->left == NULL)
    {
        return minDepth(root->right) + 1;
    }
    else if (root->right == NULL)
    {
        return minDepth(root->left) + 1;
    }
    // just find the height instead max here use min
    int lh = minDepth(root->left);
    int rh = minDepth(root->right);
    int ans = min(lh, rh) + 1;
    return ans;
}
*/