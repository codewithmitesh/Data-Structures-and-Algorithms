/**
 * @file ConstructBinaryTreeInorderPreorder.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-17
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * Read Take u Forward article
unordered_map<int, int> ump;
TreeNode *solve(int inStart, int inEnd, int preStart, int preEnd, vector<int> &inorder, vector<int> &preorder)
{

    if (inStart > inEnd || preStart > preEnd)
    {
        return NULL;
    }

    int eleInd = ump[preorder[preStart]];
    int noonLeft = eleInd - inStart;
    TreeNode *root = new TreeNode(preorder[preStart]);

    root->left = solve(inStart, eleInd - 1, preStart + 1, preStart + noonLeft, inorder, preorder);
    root->right = solve(eleInd + 1, inEnd, preStart + noonLeft + 1, preEnd, inorder, preorder);

    return root;
}

TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{

    for (int i = 0; i < inorder.size(); i++)
    {
        ump[inorder[i]] = i;
    }

    int preStart = 0, preEnd = preorder.size() - 1;
    int inStart = 0, inEnd = inorder.size() - 1;

    return solve(inStart, inEnd, preStart, preEnd, inorder, preorder);
}
*/