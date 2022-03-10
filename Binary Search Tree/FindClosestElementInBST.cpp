/**
 * @file FindClosestElementInBST.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-03-10
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int ans = INT_MAX;

void Inorder(Node *root, int K)
{

    if (root == NULL)
        return;

    Inorder(root->left, K);

    ans = min(ans, abs(root->data - K));

    Inorder(root->right, K);
}

int minDiff(Node *root, int K)
{

    Inorder(root, K);
    return ans;
}
*/