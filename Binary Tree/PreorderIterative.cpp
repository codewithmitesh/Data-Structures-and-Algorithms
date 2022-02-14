/**
 * @file PreorderIterative.cpp
 * @author  Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief Solution :- TC :- O(n)  A.S :- O(h)
 *
vector<int> preOrder(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    stack<Node *> st;
    Node *curr = root;    
    while (curr != NULL || st.empty() == false)
    {
        while (curr != NULL)
        {
            ans.push_back(curr->data);
            if (curr->right != NULL)
            {
                st.push(curr->right);
            }
            curr = curr->left;
        }
        if (st.empty() == false)
        {
            curr = st.top();
            st.pop();
        }
    }
}
*/



