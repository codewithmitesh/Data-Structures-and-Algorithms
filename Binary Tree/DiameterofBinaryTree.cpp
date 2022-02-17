/**
 * @file DiameterofBinaryTree.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-17
 *
 * @copyright Copyright (c) 2022
 *
 * Method :- Just refractoring the height function by maintiaing our ans in global variable
 */
/**
int res = INT_MIN;

int height(Node *root)
{

    if (root == NULL)
        return 0;

    int lh = height(root->left);
    int rh = height(root->right);

    res = max(res, 1 + lh + rh);

    return max(lh, rh) + 1;
}

int diameter(Node *root)
{

    int heighttemp = height(root);
    return res;
}
*/