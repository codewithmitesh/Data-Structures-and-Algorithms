/**
 * @file ClosestNodeQueriesBST.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<vector<int>> closestNodes(TreeNode *root, vector<int> &queries)
{
    vector<vector<int>> res;
    for (int q : queries)
    {
        TreeNode *node = root;
        int mini = -1, maxi = -1;
        while (node)
        {
            if (q == node->val)
            {
                mini = maxi = node->val;
                break;
            }
            else if (q < node->val)
            {
                maxi = node->val;
                node = node->left;
            }
            else if (q > node->val)
            {
                mini = node->val;
                node = node->right;
            }
        }
        res.push_back({mini, maxi});
    }
    return res;
}
*/