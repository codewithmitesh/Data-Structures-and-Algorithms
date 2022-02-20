/**
 * @file CheckIfTreeIsSumTreeOrNot.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-20
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * Solution :- MIMP Based on Child Sum Property and Trasfert to sum tree so revise both quetions first

int checkSum(Node *node)
{

    if (node == NULL)
        return 0;

    if (node->left == NULL && node->right == NULL)
        return node->data;

    int leftSum = checkSum(node->left);
    int rightSum = checkSum(node->right);
    int currSum = node->data;

    if (leftSum != -1 && rightSum != -1)
    {
        if (currSum == (leftSum + rightSum))
        {
            return (leftSum + rightSum + currSum);
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return -1;
    }
}
bool isSumTree(Node *root)
{
    if (root == NULL)
        return true;

    int ans = checkSum(root);
    if (ans == -1)
        return false;
    else
        return true;
}
*/