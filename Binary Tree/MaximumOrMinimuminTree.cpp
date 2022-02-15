/**
 * @file MaximumOrMinimuminTree.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-14
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief Solution :- MAximum and Minimum of TREE
 *

int findMax(Node *root)
{
    if (root == NULL)
    {
        return INT_MIN;
    }
    else
    {
        return max(max(findMax(root->left), findMax(root->right)), root->data);
    }
}
int findMin(Node *root)
{
    if (root == NULL)
    {
        return INT_MAX;
    }
    else
    {
        return min(min(findMin(root->left), findMin(root->right)), root->data);
    }
}

*/
