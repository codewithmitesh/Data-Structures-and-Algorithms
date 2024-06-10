/**
 * Implement BST,, Insert, Search, Delete
 */
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node()
    {
        val = 0;
        left = NULL;
        right = NULL;
    }
    Node *insert(Node *, int);
    void inorder(Node *);
};

Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        Node *temp = new Node();
        temp->val = val;
        return temp;
    }
    if (val < root->val)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }

    return root;
}

bool search(Node *root, int val)
{
    if (root == NULL)
    {
        return false;
    }

    if (root->val == val)
    {
        return true;
    }
    else if (root->val > val)
    {
        search(root->left, val);
    }
    else
    {
        search(root->right, val);
    }
}

// Delete Node in BST
// 3cases :-
// node is leaf
// node has only one child
// node has 2 child

int inorderSuccesor(Node *root)
{
    Node *curr = root->right;
    int temp = 0;
    while (curr->left != NULL)
    {
        temp = curr->val;
        curr = curr->left;
    }
    return temp;
}

Node *deleteNode(Node *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->val == val)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete (root);
            return NULL;
        }
        else if (root->left == NULL)
        {
            Node *temp = root->right;
            delete (root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete (root);
            return temp;
        }
        else
        {
            int inorderSuccessval = inorderSuccesor(root);
            root->val = inorderSuccessval;
            root->right = deleteNode(root->right, inorderSuccessval);
            return root;
        }
    }
    else if (root->val > val)
    {
        root->left = deleteNode(root->left, val);
    }
    else
    {
        root->right = deleteNode(root->right, val);
    }
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void preorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    cout << root->val;
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val;
}

int main()
{

    // cout << "Hello World" << endl;

    Node *root = insert(NULL, 4);
    Node *node2 = insert(root, 2);
    Node *node1 = insert(root, 1);
    Node *node3 = insert(root, 3);
    Node *node5 = insert(root, 5);
    Node *node6 = insert(root, 6);
    insert(root, 10);
    insert(root, 7);
    insert(root, 8);
    insert(root, 9);

    inorder(root);
    // preorder(root);
    // postorder(root);
    deleteNode(root, 10);
    // cout << search(root, 50);
    inorder(root);
    cout << search(root, 10);

    return 0;
}

//     4
//    2 5
//   1 3 6
