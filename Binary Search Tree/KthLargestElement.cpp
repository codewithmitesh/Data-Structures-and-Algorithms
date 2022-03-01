/**
 * @file KthLargestElement.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * Approach 1 find size and then find (size-k+1)

int size(Node *root)
{

    if (root == NULL)
        return 0;
    return 1 + size(root->left) + size(root->right);
}
int count = 0, ans = -1;

void getInorder(Node *root, int k, int n)
{

    if (root == NULL)
        return;

    getInorder(root->left, k, n);
    count++;
    if (count == (n - k) + 1)
    {
        ans = root->data;
        return;
    }
    getInorder(root->right, k, n);
}
int kthLargest(Node *root, int K)
{

    int n = size(root);
    getInorder(root, K, n);

    return ans;
}
*/
/**
 * Approach 2 :- Go to right root left and do k-- as kbecomes 1 it our kth largest
 *
int ans = -1;
void inorder(Node *root, int &K)
{
    if (root == NULL)
        return;

    inorder(root->right, K);
    if (K == 1)
        ans = root->data;
    K--;
    inorder(root->left, K);
}
int kthLargest(Node *root, int K)
{
    // Your code here
    inorder(root, K);
    return ans;
}
*/