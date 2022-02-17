/**
 * @file DiagonalTraversal.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-18
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * If we need to return vector of vector then:-
vector <vector <int>> result;
void diagonalPrint(Node* root)
{
    if(root == NULL)
        return;

    queue <Node*> q;
    q.push(root);

    while(!q.empty())
    {
        int size = q.size();
        vector <int> answer;

        while(size--)
        {
            Node* temp = q.front();
            q.pop();

            // traversing each component;
            while(temp)
            {
                answer.push_back(temp->data);

                if(temp->left)
                    q.push(temp->left);

                temp = temp->right;
            }
        }
        result.push_back(answer);
    }
}
 */
/**
 * GFG Solution : - Return type vector<int>
 *
vector<int> diagonal(Node *root)
{
    vector<int> ans;

    if (root == NULL)
        return ans;

    queue<Node *> q;
    q.push(root);

    while (q.empty() == false)
    {
        int cnt = q.size();

        for (int i = 0; i < cnt; i++)
        {
            Node *curr = q.front();
            q.pop();

            while (curr != NULL)
            {
                ans.push_back(curr->data);

                if (curr->left != NULL)
                {
                    q.push(curr->left);
                }

                curr = curr->right;
            }
        }
    }
    return ans;
}
*/