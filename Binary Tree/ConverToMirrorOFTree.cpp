/**
 * @file ConverToMirrorOFTree.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-03-06
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
void mirror(Node *node)
{

    if (node->left == NULL && node->right == NULL)
    {
        return;
    }

    if (node->left != NULL)
    {
        mirror(node->left);
    }
    if (node->right != NULL)
    {

        mirror(node->right);
    }

    Node *temp = node->left;
    node->left = node->right;
    node->right = temp;
}
*/