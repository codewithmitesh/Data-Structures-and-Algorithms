/**
 * @file NextNode.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-30
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
Node *nextRight(Node *root, int key)
{

    if (root == NULL || root->data == key)
    {
        Node *ans = new Node(-1);
    }
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {

        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->data == key && i != n - 1)
            {
                return q.front();
            }
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }

    return new Node(-1);
}
*/