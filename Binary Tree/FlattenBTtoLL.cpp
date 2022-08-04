/**
 * @file FlattenBTtoLL.cpp
 * @author Miteshe Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-22
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * Using Morrise traversal of preorder and just changging some connections
void flatten(TreeNode *root)
{

    TreeNode *tempcurr = NULL, *curr = root;

    while (curr != NULL)
    {

        if (curr->left != NULL)
        {

            tempcurr = curr->left;

            while (tempcurr->right != NULL)
            {
                tempcurr = tempcurr->right;
            }

            tempcurr->right = curr->right;

            curr->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }

    // return root;

}
*/