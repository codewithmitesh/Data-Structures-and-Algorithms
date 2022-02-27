/**
 * @file DeleteNodeinBST.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-27
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * MMMIMP
Node *inorderSucessor(Node *root)
{
    Node *curr = root;
    while (curr != NULL && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

// Function to delete a node from BST.
Node *deleteNode(Node *root, int X)
{

    if (root == NULL)
        return root;

    if (root->data > X)
    {
        root->left = deleteNode(root->left, X);
    }
    else if (root->data < X)
    {
        root->right = deleteNode(root->right, X);
    }
    else
    {

        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        else
        {

            Node *temp = inorderSucessor(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}
*/