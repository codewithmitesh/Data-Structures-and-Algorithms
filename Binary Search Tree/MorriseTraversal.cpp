/**
 * @file MorriseTraversal.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
void morrisTraversalPreorder(node *root)
{
    node *curr = root;
    while (curr != NULL)
    {
        // Case 1 :-
        //  If left child is null, print the current node data. Move to
        //  right child.
        if (curr->left == NULL)
        {
            cout << curr->data << " ";
            curr = curr->right;
        }
        else
        {
            // Find the right most in left subtree and point it to curr
            node *temp = curr->left;
            while (temp->right != NULL && temp->right != curr)
                temp = temp->right;

            // iof the Right most ka right is NULL then point it to curr
            if (temp->right == NULL)
            {
                temp->right = curr;
                cout << root->data << " ";

                curr = curr->left;
            }
            // ..if the right most is alreadypointed then just cut it and go to right
            else
            {
                temp->right = NULL;
                curr = curr->right;
            }
        }
    }
}
*/
/**
 * INORDER TRAVERSal

void morrisTraversalInorder(node *root)
{
    node *curr = root;
    while (curr != NULL)
    {
        // Case 1 :-
        //  If left child is null, print the current node data. Move to
        //  right child.
        if (curr->left == NULL)
        {
            cout << curr->data << " ";
            curr = curr->right;
        }
        // Case 2
        else
        {
            // Find the right most in left subtree and point it to curr
            node *temp = curr->left;
            while (temp->right != NULL && temp->right != curr)
                temp = temp->right;

            // iof the Right most ka right is NULL then point it to curr
            if (temp->right == NULL)
            {
                temp->right = curr;
                curr = curr->left;
            }
            // ..if the right most is alreadypointed then just cut it and go to right
            else
            {
                temp->right = NULL;
                cout << root->data << " ";
                curr = curr->right;
            }
        }
    }
}
*/