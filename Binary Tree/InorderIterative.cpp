/**
 * @file InorderIterative.cpp
 * @brief Mitesh Tank (codewithmitesh)
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * SOlution MMMIMP:
 */
/**
vector<int> inOrder(Node *root)
{
    vector<int> ans;

    // * step 1 :- Create an empty stack S of datatype BinaryNode
    stack<Node *> s;
    // * step 2 :- Initialize current node as root
    Node *curr = root, *PoppedNode = NULL;

    while (curr != NULL || (s.empty() == false))
    {
        // * step 3 :-  Push the current node to S and set current = current->left until current is NULL
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        // * Step 4 (a) :- If current is NULL and stack is not empty then Pop the top item from stack.
        PoppedNode = s.top();
        s.pop();
        // * Step 4 (b) :- Print the popped item and set current = popped_item->right
        ans.push_back(PoppedNode->data);
        curr = PoppedNode->right;
    }
    return ans;
}
*/