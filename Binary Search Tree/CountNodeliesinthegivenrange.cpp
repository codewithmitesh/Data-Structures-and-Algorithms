/**
 * @file CountNodeliesinthegivenrange.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-03-09
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
void preorder(Node *root, int l, int h, int &count)
{

    if (root == NULL)
        return;

    if (root->data >= l && root->data <= h)
    {
        count++;
    }

    preorder(root->left, l, h, count);
    preorder(root->right, l, h, count);
}

int getCount(Node *root, int l, int h)

{
    int count = 0;
    preorder(root, l, h, count);
    return count;
}

*/