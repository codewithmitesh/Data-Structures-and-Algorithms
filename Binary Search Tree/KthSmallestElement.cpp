/**
 * @file KthSmallestElement.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * TC = O(N) or O(H+K)
 * AS = O(h)
int count = 0, ans = -1;
void getInorder(Node *root, int k)
{

    if (root == NULL)
        return;

    getInorder(root->left, k);
    count++;
    if (count == k)
    {
        ans = root->data;
        return;
    }
    getInorder(root->right, k);
}
int KthSmallestElement(Node *root, int K)
{

    getInorder(root, K);

    return ans;
}
*/
// ! NOTE :- We can Further Optimise it Using Morrise Traversal O(n) time and O(1) Auxilary Space