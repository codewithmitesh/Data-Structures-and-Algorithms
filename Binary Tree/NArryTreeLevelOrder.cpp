/**
 * @file NArryTreeLevelOrder.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-09-05
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<vector<int>> levelOrder(Node *root)
{

    vector<vector<int>> ans;

    if (root == NULL)
        return ans;
    queue<Node *> q;
    q.push(root);
    // vector<int> tempVector;
    // tempVector.push_back(root->val);
    // ans.push_back(tempVector);
    while (q.empty() == false)
    {
        int size = q.size();
        vector<int> tempVector;
        for (int i = 0; i < size; i++)
        {
            Node *temp = q.front();
            q.pop();
            tempVector.push_back(temp->val);
            // vector<Node*> Nodechildren = temp->children;
            for (auto it : temp->children)
            {
                q.push(it);
            }
        }

        ans.push_back(tempVector);
    }

    return ans;
}
*/