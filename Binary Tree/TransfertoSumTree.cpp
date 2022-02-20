/**
 * @file TransfertoSumTree.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-19
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief Solution :-

int solve(Node *root)
{
    if (!root)
        return 0;

    int leftSum = solve(root->left);
    int rightSum = solve(root->right);
    int currData = root->data;

    root->data = leftSum + rightSum;

    return (leftSum + rightSum + currData);
}

void toSumTree(Node *node)
{
    solve(node);
}
 *
 */
