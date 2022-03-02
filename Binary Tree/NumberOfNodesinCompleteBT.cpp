/**
 * @file NumberOfNodesinCompleteBT.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-03-02
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int countNodeinCompleteBT(Node *root)
{

    int lh = 0, rh = 0;
    Node *curr = root;
    while (curr != NULL)
    {
        lh++;
        curr = curr->left;
    }
    Node *curr = root;
    while (curr != NULL)
    {
        rh++;
        curr = curr->right;
    }
    if (lh == rh)
        return pow(2, lh) + 1;
    else
    {
        return 1 + countNodeinCompleteBT(root->left) + countNodeinCompleteBT(root->right);
    }
}

*/