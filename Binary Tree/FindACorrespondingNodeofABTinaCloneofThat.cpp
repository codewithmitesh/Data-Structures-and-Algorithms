/**
 * @file FindACorrespondingNodeofABTinaCloneofThat.cpp
 * @author Mitesh Tank(codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-05-17
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/**
class Solution
{
private:
    void inorder(TreeNode *original, TreeNode *cloned, TreeNode *target, TreeNode *&res)
    {

        if (original == NULL || cloned == NULL)
            return;

        inorder(original->left, cloned->left, target, res);

        if (original == target)
        {
            res = cloned;
        }

        inorder(original->right, cloned->right, target, res);
    }

public:
    TreeNode *res;
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
    {

        if (original == NULL || cloned == NULL)
            return NULL;

        inorder(original, cloned, target, res);
        return res;
    }
};
*/
