/**
 * @file CheckIfTreeBalncedORNot.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-15
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief Solution :- O(N2);
 *
int height(Node *root){
    if(root==NULL)
        return 0;
    else
        return (1+max(height(root->left),height(root->right)));
}

bool isBalanced(Node *root){
    if(root==NULL)
        return true;
    int lh=height(root->left);
    int rh=height(root->right);
    return (abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right));
}
 */
/**
 * Solution : - O(N)
 *
int checkForBalanced(Node *root)
{
          // * if root is null then height = 0
    if (root == NULL)
        return 0;
      // * finding the height of the left subtree
    int lh = checkForBalanced(root->left);
    // * if left subtree is not balanced then return -1 means not balanced
    if (lh == -1)
        return -1;

      // * finding the height of the right subtree
    int rh = checkForBalanced(root->right);
    // * if right subtree is not balanced then return -1 means not balanced
    if (rh == -1)
        return -1;
    // * if the difference between lh and rh is more than 1 that means not balanced
    if (abs(lh - rh) > 1)
        return -1;
    // * else means it is balanced then return height of the tree
    else
        return max(lh, rh) + 1;
}
// Function to check whether a binary tree is balanced or not.
bool isBalanced(Node *root)
{

    if (checkForBalanced(root) == -1)
        return false;
    else
        return true;
}
*/