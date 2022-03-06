/**
 * @file VerticalWidthOfTree.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-03-06
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int k = 0;
void Solve(Node *root, int &minimum, int &maximum, int k)
{

    if (root == NULL)
        return;

    Solve(root->left, minimum, maximum, k - 1);

    if (minimum > k)
    {
        minimum = k;
    }
    if (maximum < k)
    {
        maximum = k;
    }

    Solve(root->right, minimum, maximum, k + 1);
}

int verticalWidth(Node *root)
{

    int minimum = INT_MAX, maximum = INT_MIN;
    Solve(root, minimum, maximum, k);
    return (abs(minimum) + maximum) + 1;
}
*/