/**
 * @file FloorOFBinarySTrew.cpp
 * @author your name (you@domain.com
 * @brief
 * @version 0.1
 * @date 2022-02-27
 *
 * @copyright Copyright (c) 2022
 *
 * ! Idea :- It is Based On ASearch In ITeratively Method
 */
/**
Node *floor(Node *root, int x)
{
    Node *res = NULL;
    Node *curr = root;
    while (curr != NULL)
    {
        if (curr->key == x)
            return curr;
        else if (curr->key > x)
            curr = curr->left;
        else
        {
            res = curr;
            curr = curr->right;
        }
    }
    return res;
}
*/
/**
 * Ceil Of a Binary Tree :-
 *
Node *ceil(Node *root, int x)
{
    Node *res = NULL;
    Node *curr = root;
    while (curr != NULL)
    {
        if (curr->key == x)
            return root;
        else if (curr->key < x)
            curr = curr->right;
        else
        {
            res = curr;
            curr = curr->left;
        }
    }
    return res;
}
*/