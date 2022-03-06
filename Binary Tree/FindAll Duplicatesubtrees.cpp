// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

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
    Node *root = new Node(stoi(ip[0]));

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

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

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
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

void preorder(Node *root)
{
    if (!root)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// } Driver Code Ends
// function Template for C++

/*
Structure of the node of the binary tree is as
struct Node {
    int data;
    struct Node* left, *right;
};
*/
// you are required to complete this function
// the function and return an vector of Node
// which contains all the duplicate sub-tree
// Ans:-
vector<Node *> ans;
unordered_map<string, int> ump;
string Solve(Node *root)
{

    if (root == NULL)
        return "$";
    string s1 = Solve(root->left);
    string s2 = Solve(root->right);

    string s = "";
    s = s1 + to_string(root->data) + s2;

    ump[s]++;
    if (ump[s] == 2)
    {
        ans.push_back(root);
    }
    return s;
}

vector<Node *> printAllDups(Node *root)
{
    ump.clear();
    ans.clear();
    Solve(root);

    return ans;
}
/// Ans Till HEre
// { Driver Code Starts.
int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        vector<Node *> res = printAllDups(root);

        for (int i = 0; i < res.size(); i++)
        {
            preorder(res[i]);
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends