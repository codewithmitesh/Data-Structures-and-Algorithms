/**
 * @file SumRootToLeafNumbers.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-14
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
    int ans = 0;
    void solve(TreeNode *root, string &temp)
    {
        if (root == nullptr)
            return;
        if (root->left == NULL && root->right == NULL)
        {
            temp += to_string(root->val);
            ans += stoi(temp);
            temp.pop_back();
            return;
        }

        solve(root->left, temp += to_string(root->val));
        temp.pop_back();
        solve(root->right, temp += to_string(root->val));
        temp.pop_back();
    }

    int sumNumbers(TreeNode *root)
    {
        string temp = "";
        solve(root, temp);
        return ans;
    }
};