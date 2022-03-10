/**
 * @file FindPairSum.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-03-08
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
unordered_set<int> uns;
bool flag = 0;
bool Solve(Node *root, int X)
{
    if (!root)
        return false;
    if (Solve(root->left, X) == true)
        return true;
    if (uns.find(X - root->data) != uns.end())
        return true;
    else
        uns.insert(root->data);
    return Solve(root->right, X);
}
// Function to check if any pair exists in BST whose sum is equal to given value.
bool findPair(Node *root, int X)
{
    uns.clear();
    if (Solve(root, X))
        return true;
    else
        false;
}
*/