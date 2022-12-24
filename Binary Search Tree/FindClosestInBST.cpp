/**
 * @file FindClosestInBST.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
void closest(TreeNode *root, int index, int &ans1, int &ans2)
{
    if (!root)
        return;

    if (root->val < index)
    {
        ans1 = root->val;
        closest(root->right, index, ans1, ans2);
    }
    else if (root->val > index)
    {
        ans2 = root->val;
        closest(root->left, index, ans1, ans2);
    }
    else
    {
        ans1 = root->val;
        ans2 = root->val;
        return;
    }

    return;
}
// less than equal to  will be stored in ans1
// Greater than equal to  will be stored in ans2

vector<vector<int>> closestNodes(TreeNode *root, vector<int> &queries)
{

    vector<vector<int>> res;

    for (int i = 0; i < queries.size(); i++)
    {
        vector<int> ans;
        ans.push_back(INT_MIN);
        ans.push_back(INT_MAX);
        closest(root, queries[i], ans[0], ans[1]);
        ans[0] = (ans[0] == INT_MIN) ? -1 : ans[0];
        ans[1] = (ans[1] == INT_MAX) ? -1 : ans[1];
        res.push_back(ans);
    }

    return res;
}
*/