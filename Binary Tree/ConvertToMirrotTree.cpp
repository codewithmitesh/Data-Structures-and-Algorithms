/**
 * @file ConvertToMirrotTree.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-17
 *
 * @copyright Copyright (c) 2022
 *
 * Convert to Mirror Tree
 *
 */
/**


// Function to convert to  mirror tree

Node *mirrorTree(Node *root)
{
    // Base Case
    if (root == NULL)
        return NULL;
    node *temp = root->left;
    root->left = root->right;
    root->right = temp;

    if (root->left != NULL)
        mirrorTree(root->left);
    if (root->right != NULL)
        mirrorTree(root->right);

    return root;
}
*/