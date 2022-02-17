/**
 * @file ConvertTreetoDLL.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-16
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * Solution :- 🔥💻😃👌 see Video solution is same as Inorder traversal just we need to maintain the prev pointer which is also a tail pointer for genrate DLL to access of prev Node
 *
Node *prev = NULL, *head = NULL;
// Function to convert binary tree to doubly linked list and return it.
Node *bToDLL(Node *root)
{
    //base condition of Inorder here return type is Node hence return NULL
    if (root == NULL)
        return NULL;
    // go for Leftsubtree
    bToDLL(root->left);
    // Insted of just printing the node here we will change the connections beteween then and updating the prevpointer or tail pointer of DLL
    if (prev == NULL) // if the head is null means we need to make left most node to head this condition will be true for only one time in whole programme
        head = root;
    else
    {
        root->left = prev;
        prev->right = root;
    }

    // Updating the prev pointer as root
    prev = root;

    // go for Rightsubtree
    bToDLL(root->right);

    return head;
}
*/