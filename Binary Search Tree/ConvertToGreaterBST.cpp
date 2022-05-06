/**
 * @file ConvertToGreaterBST.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-04-17
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
class Solution
{
private:
    int cur_sum = 0;

public:
    void travel(TreeNode *root)
    {
        if (!root)
            return;
        if (root->right)
            travel(root->right);

        root->val = (cur_sum += root->val);
        if (root->left)
            travel(root->left);
    }
    TreeNode *convertBST(TreeNode *root)
    {
        travel(root);
        return root;
    }
};
*/