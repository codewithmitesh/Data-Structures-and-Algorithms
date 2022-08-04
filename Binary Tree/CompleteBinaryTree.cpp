/**
 * @file CompleteBinaryTree.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-04
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool isCompleteBT(Node *root)
{
    queue<Node *> q;
    q.push(root);
    bool flag = false;
    while (q.empty() == false)
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            flag = true;
        }
        else
        {
            if (flag == true)
            {
                return false;
            }
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    return true;
}
*/