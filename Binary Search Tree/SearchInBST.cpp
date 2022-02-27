/**
 * @file SearchInBST.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-24
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * Solution 1 Recursive TC:- O(h) AS :- O(h)
 *
bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->key == x)
        return true;
    else if (root->key > x)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}
*/
/**
 *Solution :- Iterative TC :- O(h) AS :- O(1)
bool search(Node *root, int x)
{
    while (root != NULL)
    {
        if (root->key == x)
            return true;
        else if (root->key < x)
            root = root->right;
        else
            root = root->left;
    }
    return false;
}
*/