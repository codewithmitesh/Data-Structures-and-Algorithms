/**
 * @file CountNodeAvegEqualtoSubtree.cpp

 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-13
 *
 * @copyright Copyright (c) 2023
 *
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    pair<int, int> postorder(TreeNode *root, int &ans, int sum, int cnt)
    {
        if (root == NULL)
            return {0, 0};

        auto left = postorder(root->left, ans, sum, cnt);

        auto right = postorder(root->right, ans, sum, cnt);

        sum = left.first + right.first + root->val;
        cnt = left.second + right.second + 1;

        if (sum / cnt == root->val)
        {
            ans++;
        }
        return {sum, cnt};
    }
    int averageOfSubtree(TreeNode *root)
    {
        int ans = 0;
        auto temp = postorder(root, ans, 0, 0);
        return ans;
    }
};