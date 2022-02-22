/**
 * @file FindDistanceBtwTwoNode.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-23
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * MMMIMP question
Node *LCA(Node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    Node *left = LCA(root->left, n1, n2);
    Node *right = LCA(root->right, n1, n2);

    if (left == NULL)
    {
        return right;
    }
    if (right == NULL)
    {
        return left;
    }

    return root;
}
int findDistance(Node *root, int key, int dist)
{

    if (root == NULL)
        return -1;

    // if Our current root itself is our key then return distance till now
    if (root->data == key)
    {
        return dist;
    }

    // let us think if key lies in left subtree of the given tree then go for left subtree

    int left = findDistance(root->left, key, dist + 1);
    // means our key lies in left subtree
    if (left != -1)
    {
        return left;
    }

    // if left is -1 that means our key must lies in right subtree so return its distance
    return findDistance(root->right, key, dist + 1);
}
int findDist(Node *root, int a, int b)
{

    Node *lcaNode = LCA(root, a, b);

    int d1 = findDistance(lcaNode, a, 0);
    int d2 = findDistance(lcaNode, b, 0);

    return d1 + d2;
}
*/