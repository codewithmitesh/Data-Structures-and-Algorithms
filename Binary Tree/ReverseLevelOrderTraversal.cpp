/**
 * @file ReverseLevelOrderTraversal.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-17
 *
 * @copyright Copyright (c) 2022
 *
 * Similar to zigzag traversal method 1
 *
 * Idea :- just maintiaing the extra stack to reverse the printing order
vector<int> reverseLevelOrder(Node *root)
{
    vector<int> v1;
    if (root == NULL)
        return v1;
    queue<Node *> q;
    stack<int> s;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            s.push(curr->data);
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        while (s.empty() == false)
        {
            v1.push_back(s.top());
            s.pop();
        }
    }

    reverse(v1.begin(), v1.end());

    return v1;
}
*/