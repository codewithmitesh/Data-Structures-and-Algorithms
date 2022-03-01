/**
 * @file checkForBST.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-28
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 *
int prev = INT_MIN;

bool isBST(Node *root)
{
    if (root == NULL)
        return true;

    if (isBST(root->left) == false)
        return false;
    if (root->data <= prev)
        return false;
    prev = root->data;

    return isBST(root->right);
}
*/