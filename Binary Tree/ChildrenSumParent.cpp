/**
 * @file ChildrenSumParent.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-15
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief Solution :-
 *
 *
int isSumProperty(Node *root)
{

    if (root == NULL)
        return 1;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int sum = 0;
    if (root->left != NULL)
        sum += root->left->data;
    if (root->right != NULL)
        sum += root->right->data;

    if ((root->data == sum && isSumProperty(root->left) && isSumProperty(root->right)) == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 */