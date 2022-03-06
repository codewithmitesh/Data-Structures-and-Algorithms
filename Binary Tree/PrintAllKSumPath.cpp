/**
 * @file PrintAllKSumPath.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-03-05
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int res = 0;

void solve(Node *root, vector<int> &v, int k)
{

    if (root == NULL)
        return;

    v.push_back(root->data);

    solve(root->left, v, k);
    solve(root->right, v, k);

    int sum = 0;
    for (int j = v.size() - 1; j >= 0; j--)
    {

        sum += v[j];

        if (sum == k)
        {
            res++;
        }
    }

    v.pop_back();
}

int sumK(Node *root, int k)
{

    vector<int> v;
    solve(root, v, k);
    return res;
}
*/