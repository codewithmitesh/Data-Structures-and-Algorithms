/**
 * @file PostOrderrecursive.cpp
 * @brief Mitesh Tank (codewithmitesh)
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * Solution :-
void PostOrderRec(vector<int> &ans, Node *root)
{
    if (root == NULL)
        return;
    // postorder -=>left->right->root
    PostOrderRec(ans, root->left);
    PostOrderRec(ans, root->right);
    ans.push_back(root->data);
}
// Function to return a list containing the postorder traversal of the tree.
vector<int> postOrder(Node *root)
{
    vector<int> ans;
    PostOrderRec(ans, root);
    return ans;
}
*/