// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Utility function to create a new Tree Node
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

// } Driver Code Ends
/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution
{
public:
    bool isLeaf(Node *node)
    {
        if (node->left == NULL && node->right == NULL && node != NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void LeftBoundaryTraversal(Node *root, vector<int> &ans)
    {
        Node *curr = root->left;
        while (curr != NULL)
        {
            if (!isLeaf(curr))
            {
                ans.push_back(curr->data);
            }
            if (curr->left != NULL)
            {
                curr = curr->left;
            }
            else
            {
                curr = curr->right;
            }
        }
    }

    void LeafTraversal(Node *root, vector<int> &ans)
    {
        if (isLeaf(root))
        {
            ans.push_back(root->data);
            return;
        }
        if (root->left != NULL)
            LeafTraversal(root->left, ans);
        if (root->right != NULL)
            LeafTraversal(root->right, ans);
    }
    void RightBoundaryTraversal(Node *root, vector<int> &ans)
    {
        Node *curr = root->left;
        stack<int> st;
        while (curr != NULL)
        {
            if (!isLeaf(curr))
            {
                st.push(curr->data);
            }
            if (curr->right != NULL)
            {
                curr = curr->right;
            }
            else
            {
                curr = curr->left;
            }
        }
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
    }

    vector<int> boundary(Node *root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;
        if (!isLeaf(root))
            ans.push_back(root->data);
        // first traverse through left Boundary
        LeftBoundaryTraversal(root, ans);
        /// Traverse to Leaf Boundary
        LeafTraversal(root, ans);

        // traversing the right boundary
        RightBoundaryTraversal(root, ans);

        return ans;
    }
};

// { Driver Code Starts.

/* Driver program to test size function*/

int main()
{
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--)
    {
        string s, ch;
        getline(cin, s);
        Node *root = buildTree(s);
        Solution ob;
        vector<int> res = ob.boundary(root);
        for (int i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends

/**
 * @brief  ANother Solution without using Loop or checking for leaf Node is :-
void traverseLeft(Node* root,vector<int>& ans){

        // Base Case
        if((root==NULL) || (root->left == NULL && root->right == NULL)) return;
        ans.push_back(root->data);

        if(root->left) traverseLeft(root->left,ans);
        else traverseLeft(root->right,ans);

    }

    void traverseLeaf(Node* root,vector<int>& ans){

        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
            return;
        }

        traverseLeaf(root->left,ans);
        traverseLeaf(root->right,ans);

    }

    void traverseRight(Node* root,vector<int>& ans){

        if((root==NULL) || (root->left == NULL && root->right == NULL)) return;
        if(root->right) traverseRight(root->right,ans);
        else traverseRight(root->left,ans);

        // Reverse order mai store karlo
        ans.push_back(root->data);

    }

    vector <int> boundary(Node *root)
    {
        vector<int>ans;
        if(root == NULL) return ans;
        ans.push_back(root->data);

        // Step1 : Traverse Left Part
        traverseLeft(root->left,ans);

        // Step2: Traverse Leaf Nodes
        traverseLeaf(root->left,ans); // Left Subtree
        traverseLeaf(root->right,ans); // Right Subtree

        // Step3: Traverse Right Part
        traverseRight(root->right,ans);

       return ans;
    }

 */