/**
 * @file DeepestLeavesSum.cpp
 * @author Mitesh Tank (Codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-15
 *
 * @copyright Copyright (c) 2022
 *
 */
// BFS Approach
/**
int deepestLeavesSum(TreeNode *root)
{

    int sum = 0;
    queue<TreeNode *> q;

    q.push(root);

    while (q.empty() == false)
    {

        int size = q.size();

        for (int i = 0; i < size; i++)
        {

            TreeNode *temp = q.front();
            q.pop();
            sum += temp->val;

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }

            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }

        if (q.empty() == false)
        {
            sum = 0;
        }
    }

    return sum;
}
*/

/**
 * @brief DFS Solution Preorder Traversal
 *
int lvl = 0;
int sum = 0;
void getSum(TreeNode *root, int curlvl)
{
    if (!root)
        return;
    if (lvl == curlvl)
    {
        sum += root->val;
    }
    if (curlvl > lvl)
    {
        sum = root->val;
        lvl = curlvl;
    }
    getSum(root->left, curlvl + 1);
    getSum(root->right, curlvl + 1);
}

int deepestLeavesSum(TreeNode *root)
{
    getSum(root, 1);
    return sum;
}
*/