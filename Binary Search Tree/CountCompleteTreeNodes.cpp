/**
 * @file CountCompleteTreeNodes.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int FindleftHeight(TreeNode *root)
{
    int hight = 0;
    while (root)
    {
        hight++;
        root = root->left;
    }
    return hight;
}
int FindrightHeight(TreeNode *root)
{
    int hight = 0;
    while (root)
    {
        hight++;
        root = root->right;
    }
    return hight;
}

int countNodes(TreeNode *root)
{

    if (root == NULL)
        return 0;

    // calculate the left and right height total TC  = O(logn) because for Complete BT height will always be Logn
    int leftHeight = FindleftHeight(root);
    int rightHeight = FindrightHeight(root);
    // if the left and riht subtree height is same simply return 2^h-1;
    if (leftHeight == rightHeight)
        return pow(2, leftHeight) - 1;

    return 1 + countNodes(root->left) + countNodes(root->right);
}
*/