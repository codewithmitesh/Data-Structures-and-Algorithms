/**
 * @file KthLargestSumInBinaryTree.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-05
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
    long long kthLargestLevelSum(TreeNode *root, int k)
    {

        long long ans = 0;

        queue<TreeNode *> q;
        priority_queue<long long, vector<long long>, greater<long long>> pq;

        q.push(root);

        int levels = 0;
        while (!q.empty())
        {
            int sz = q.size();
            long long sum = 0;
            while (sz--)
            {
                TreeNode *node = q.front();
                q.pop();
                sum += node->val;
                if (node->left != NULL)
                {
                    q.push(node->left);
                }
                if (node->right != NULL)
                {
                    q.push(node->right);
                }
            }
            pq.push(sum);

            levels++;
        }

        while (pq.size() > k)
        {
            pq.pop();
        }
        if (levels < k)
            return -1;
        return pq.top();
    }
};