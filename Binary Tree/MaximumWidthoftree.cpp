/**
 * @file MaximumWidthoftree.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-15
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief Solution :- Same as LEvel Ordert traversal level wise
 * TC:- O(N) and AS - O(n) or theta of width
int getMaxWidth(Node *root)
{
    queue<Node *> q;
    q.push(root);
    Node *curr = root;
    int maxSize = INT_MIN;
    while (q.empty() == false)
    {
        int cnt = q.size();
        maxSize = max(maxSize, cnt);
        for (int i = 0; i < cnt; i++)
        {
            curr = q.front();
            q.pop();
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
    return maxSize;
}
 */