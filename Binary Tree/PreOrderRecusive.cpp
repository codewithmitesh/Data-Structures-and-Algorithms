/**
 * @file PreOrderRecusive.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * Solution :-
void PreOrderRec(vector<int> &ans, Node *root)
{
    if (root == NULL)
        return;
    // preorder -=>root->left->right
    ans.push_back(root->data);
    PreOrderRec(ans, root->left);
    PreOrderRec(ans, root->right);
}
// Function to return a list containing the preorder traversal of the tree.
vector<int> preorder(Node *root)
{
    vector<int> ans;
    PreOrderRec(ans, root);
    return ans;
}
*/