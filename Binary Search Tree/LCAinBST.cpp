/**
 * @file LCAinBST.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
Node *LCA(Node *root, int n1, int n2)
{

    if (root == NULL)
        return NULL;

    if (n1 < root->data && n2 < root->data)
    {
        return LCA(root->left, n1, n2);
    }
    else if (n1 > root->data && n2 > root->data)
    {
        return LCA(root->right, n1, n2);
    }
    else
        return root;
}
*/