/**
 * @file ConstructBTFromInorderandPostorder.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-16
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
    unordered_map<int, int> mp;
    TreeNode *solve(vector<int> &in, vector<int> &po, int ins, int ined, int pos, int poed)
    {
        if (ins > ined || pos > poed)
            return NULL;

        TreeNode *root = new TreeNode(po[poed]);
        int num = mp[po[poed]];
        int len = num - ins;

        root->left = solve(in, po, ins, num - 1, pos, pos + len - 1);
        root->right = solve(in, po, num + 1, ined, pos + len, poed - 1);
        return root;
    }

    TreeNode *buildTree(vector<int> &in, vector<int> &po)
    {

        for (int i = 0; i < in.size(); i++)
        {
            mp[in[i]] = i;
        }

        return solve(in, po, 0, in.size() - 1, 0, po.size() - 1);
    }
};