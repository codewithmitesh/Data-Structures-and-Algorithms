/**
 * @file LowestCommonAncestor.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-22
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 *
Node *lca(Node *root, int n1, int n2)
{

    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    Node *left = lca(root->left, n1, n2);
    Node *right = lca(root->right, n1, n2);

    if (left == NULL)
        return right;
    if (right == NULL)
        return left;
    return root;
}
*/