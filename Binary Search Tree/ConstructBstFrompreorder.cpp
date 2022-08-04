/**
 * @file ConstructBstFrompreorder.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-03-09
 *
 * @copyright Copyright (c) 2022
 *
 */
// Function that constructs BST from its preorder traversal.
/** here Maxvalue indecates upper bound
int i = 0;
Node *build(int pre[], int n, int mxval)
{
    if (i == n || pre[i] > mxval)
    {
        return NULL;
    }

    Node *root = newNode(pre[i++]);

    root->left = build(pre, n, root->data);
    root->right = build(pre, n, mxval);
    return root;
}
Node *post_order(int pre[], int size)
{
    i = 0;
    return build(pre, size, INT_MAX);
}
*/
/**
TreeNode *makeBST(vector<int> &preorder, int low, int high, int &index)
{
    if (index >= preorder.size())
    {
        return NULL;
    }
    if (preorder[index] < low || preorder[index] > high)
    {
        return NULL;
    }

    TreeNode *root = new TreeNode(preorder[index]);
    index += 1;
    root->left = makeBST(preorder, low, root->val, index);
    root->right = makeBST(preorder, root->val, high, index);
    return root;
}

TreeNode *bstFromPreorder(vector<int> &preorder)
{
    if (preorder.size() == 0)
    {
        return NULL;
    }

    int low = INT_MIN;
    int high = INT_MAX;
    int index = 0;

    return makeBST(preorder, low, high, index);
}
*/