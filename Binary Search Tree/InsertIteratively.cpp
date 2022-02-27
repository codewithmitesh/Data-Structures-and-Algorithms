/**
 * @file InsertIteratively.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
Node *insert(Node *root, int Key)
{

    Node *temp = new Node(Key);
    Node *curr = root, *prev = NULL;

    while (curr != NULL)
    {

        if (curr->data < Key)
        {
            prev = curr;
            curr = curr->right;
        }
        else if (curr->data > Key)
        {
            prev = curr;
            curr = curr->left;
        }
        else
        {
            return root;
        }
    }

    if (prev == NULL)
        return temp;

    if (prev->data < Key)
        prev->right = temp;
    else
        prev->left = temp;

    return root;
}

*/