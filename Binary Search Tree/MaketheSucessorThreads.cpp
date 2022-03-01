/**
 * @file MaketheSucessorThreads.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 * Populate Inorder Successor for all nodes
 */
/**
 *
// Simply traveers through INORDER and MAke Connection of the threads
Node *prev = NULL;
void populateNext(Node *root)
{

    if (root == NULL)
        return;
    populateNext(root->left);
    if (prev != NULL)
    {
        prev->next = root;
    }
    prev = root;
    populateNext(root->right);
}
*/