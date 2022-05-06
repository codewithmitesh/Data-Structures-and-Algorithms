/**
 * @file InsertNodeRecursive.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
Node *Insert(Node *root, int x)
{
    if (root == NULL)
    {
        return new Node(x);
    }
    else if (root->data < x)
    {
        root->right = Insert(root->right, x);
    }
    else if (root->data > x)
    {
        root->left = Insert(root->left, x);
    }
    else
    {
        return root;
    }
}
*/