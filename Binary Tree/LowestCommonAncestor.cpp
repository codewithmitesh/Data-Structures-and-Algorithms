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
/**
TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    // basecase 1
    if (root == NULL)
        return NULL;
    // basecase 2
    if (root == p || root == q)
    {
        return root;
    }
    // find left right
    TreeNode *l = lowestCommonAncestor(root->left, p, q);
    TreeNode *r = lowestCommonAncestor(root->right, p, q);
    // now treat root
    if (l == NULL)
    {

        return r;
    }
    else if (r == NULL)
    {
        return l;
    }
    else
    {
        return root;
    }
}
*/