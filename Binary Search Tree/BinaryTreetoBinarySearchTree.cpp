/**
 * @file BinaryTreetoBinarySearchTree.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int i = 0;
// take inorder traversal of the Binary tree
void Inorder(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    Inorder(root->left, v);
    v.push_back(root->data);

    Inorder(root->right, v);
}
void InorderPut(Node *root, vector<int> &v, int &i)
{
    if (root == NULL)
        return;
    InorderPut(root->left, v, i);
    root->data = v[i];
    i++;

    InorderPut(root->right, v, i);
}
Node *binaryTreeToBST(Node *root)
{
    vector<int> v;
    Inorder(root, v);
    // sort the vector
    sort(v.begin(), v.end());
    // put the vectors each element in  BT to get the bst
    InorderPut(root, v, i);
    return root;
}
*/