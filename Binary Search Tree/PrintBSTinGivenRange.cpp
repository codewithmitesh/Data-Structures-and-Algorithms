/**
 * @file PrintBSTinGivenRange.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
void solve(Node *root, int low, int high, vector<int> &v)
{

    if (root == NULL)
        return;

    solve(root->left, low, high, v);

    int temp = root->data;
    if (temp <= high && temp >= low)
    {
        v.push_back(temp);
    }

    solve(root->right, low, high, v);

    return;
}

vector<int> printNearNodes(Node *root, int low, int high)
{
    vector<int> ans;
    solve(root, low, high, ans);
    return ans;
}
*/