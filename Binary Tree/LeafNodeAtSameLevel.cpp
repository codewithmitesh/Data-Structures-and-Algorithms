/**
 * @file LeafNodeAtSameLevel.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-20
 *
 * @copyright Copyright (c) 2022
 *
 * Solution :-
int ans = 1;
void Traverse(Node *node, int currHeight, int &firstMaxLevelLeaf)
{

    if (node != NULL)
        return;
    if (ans == 0)
        return;
    if (node->left == NULL && node->right == NULL)
    {

        if (firstMaxLevelLeaf == -1)
        {
            firstMaxLevelLeaf = currHeight;
        }
        else
        {

            if (currHeight != firstMaxLevelLeaf)
            {
                ans = 0;
            }
        }
        return;
    }

    Traverse(node->left, currHeight + 1, firstMaxLevelLeaf);
    Traverse(node->right, currHeight + 1, firstMaxLevelLeaf);
}

bool check(Node *root)
{
    int firstMaxLevelLeaf = -1;
    Traverse(root, 0, firstMaxLevelLeaf);
    return ans;
}

 */
/**
 * Another Solution :-
set<int> a;
void height(Node *root, int h)
{
    if (!root)
        return;
    if (!root->left && !root->right)
        a.insert(h);
    height(root->left, 1 + h);
    height(root->right, 1 + h);
}
bool check(Node *root)
{

    height(root, 0);
    if (a.size() == 1)
        return true;
    else
        return false;
}
 */
