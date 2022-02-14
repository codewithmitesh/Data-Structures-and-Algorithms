/**
 * @file InorderRecursive.cpp
 * @author Mitesh Tank(codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief Using vector as input
 *
 */
/**
// Here Passing the vector by reference so that it Do not create the copy of the vector.
void inOrderRec(vector<int> &ans, Node *curRoot)
{
    if (curRoot == NULL)
    {
        return;
    }
    else
    {
        inOrderRec(ans, curRoot->left);
        
        ans.push_back(curRoot->data);
        inOrderRec(ans, curRoot->right);
    }
}

// Function to return a list containing the inorder traversal of the tree.
vector<int> inOrder(Node *root)
{

    vector<int> ans;
    inOrderRec(ans, root);
    return ans;
}
*/