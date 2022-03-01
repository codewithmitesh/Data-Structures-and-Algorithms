/**
 * @file FindSucessorandPredecessor.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-28
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 *
void findPreSuc(Node *root, Node *&pre, Node *&suc, int key)
{

    if (root == NULL)
        return;
    findPreSuc(root->left, pre, suc, key);

    if (root->key < key)
        pre = root;
    if (root->key > key && suc == NULL)
        suc = root;

    findPreSuc(root->right, pre, suc, key);
}
*/