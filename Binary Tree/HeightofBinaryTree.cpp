/**
 * @file HeightofBinaryTree.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * SOlution :- TC = O(N) , AS = O(h)
int height(struct Node *node)
{
    if (node == NULL)
        return 0;

    return max(height(node->left), height(node->right)) + 1;
}
*/