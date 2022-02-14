/**
 * @file kDistancefromRoot.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 */
/**
 * Solution :- TC = O(n) AS = O(h)
void kdistanceprint(Node *root, int k, vector<int> &ans)
{

    if (root == NULL)
        return;
    if (k == 0)
    {
        ans.push_back(root->data);
        return;
    }
    else
    {
        if (root != NULL)
        {
            kdistanceprint(root->left, k - 1, ans);

            kdistanceprint(root->right, k - 1, ans);
        }
    }
}
vector<int> Kdistance(struct Node *root, int k)
{

    vector<int> ans;
    kdistanceprint(root, k, ans);
    return ans;
}

*/