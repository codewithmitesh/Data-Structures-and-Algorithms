/**
 * @file LeftViewOfTree.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-14
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * Solution Method :- 1 Recursive or TC = O(N) AS = O(h) height of tree
 *
void printLeftView(Node *node, vector<int> &ans, int currLevel, int &maxLelevTillNow)
{

    if (node == NULL)
        return;
    if (maxLelevTillNow < currLevel)
    {
        ans.push_back(node->data);
        maxLelevTillNow = currLevel;
    }

    printLeftView(node->left, ans, currLevel + 1, maxLelevTillNow);
    printLeftView(node->right, ans, currLevel + 1, maxLelevTillNow);
}
// Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{

    vector<int> ans;
    int maxLelevTillNow = 0;
    printLeftView(root, ans, 1, maxLelevTillNow);
    return ans;
}
 */

/**
 * @brief Method 2 :- 1  Based on Level Order Traversal  TC = O(N) and AS = O(N) or Theta(w) w = width
 *
vector<int> leftView(Node *root)
{
    // Your code here

    vector<int> v;
    if (root == NULL)
        return v;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *temp = q.front();
            q.pop();
            if (i == 0)
            {
                v.push_back(temp->data);
            }
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
    return v;
}

*/