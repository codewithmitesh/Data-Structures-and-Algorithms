/**
 * @file SizeOfTree.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-14
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief Solution :-
 *
int getSize(Node *node)
{
    if (node == NULL)
        return 0;
    else
        return getSize(node->left) + getSize(node->right) + 1;
}
 *
 */