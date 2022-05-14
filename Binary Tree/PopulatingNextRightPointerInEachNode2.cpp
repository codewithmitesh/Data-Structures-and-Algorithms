/**
 * @file PopulatingNextRightPointerInEachNode2.cpp
 * @author Mitesh tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-13
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
Node *connect(Node *root)
{

    if (root == NULL)
        return NULL;

    queue<Node *> q;
    q.push(root);

    while (q.empty() == false)
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *temp = q.front();
            q.pop();

            if (i == size - 1)
            {
                temp->next = NULL;
            }
            else
            {
                temp->next = q.front();
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
    return root;
}
*/