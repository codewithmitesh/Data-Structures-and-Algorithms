/**
 * @file ConstructBinaryTreeFromPreandPostorder.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-17
 *
 * @copyright Copyright (c) 2022
 */
/**
unordered_map<int, int> ump;
TreeNode *solve(int postStart, int postEnd, int preStart, int preEnd, vector<int> &postorder, vector<int> &preorder)
{

    if (postStart > postEnd || preStart > preEnd)
    {
        return NULL;
    }

    TreeNode *root = new TreeNode(preorder[preStart]);

    if (preStart == preEnd)
        return root;

    int eleInd = ump[preorder[preStart + 1]];
    int noonLeft = eleInd + 1 - postStart;

    root->left = solve(postStart, eleInd, preStart + 1, preStart + noonLeft, postorder, preorder);
    root->right = solve(eleInd + 1, postEnd - 1, preStart + noonLeft + 1, preEnd, postorder, preorder);

    return root;
}

TreeNode *constructFromPrePost(vector<int> &preorder, vector<int> &postorder)
{

    if (preorder.size() == 0 && postorder.size() == 0)
        return NULL;
    if (preorder.size() == 1 && postorder.size() == 1)
        return new TreeNode(preorder[0]);
    for (int i = 0; i < postorder.size(); i++)
    {
        ump[postorder[i]] = i;
    }
    int preStart = 0, preEnd = preorder.size() - 1;
    int postStart = 0, postEnd = postorder.size() - 1;
    return solve(postStart, postEnd, preStart, preEnd, postorder, preorder);
}
*/