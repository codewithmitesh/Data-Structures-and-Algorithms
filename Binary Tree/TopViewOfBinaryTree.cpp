// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

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

/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {

        vector<int> ans;
        map<int, int> mpp; // creating the map to store the vertical level as key and that level's first bode's data as value
        queue<pair<Node *, int>> q;
        q.push({root, 0});
        while (q.empty() == false)
        {
            // We can also use pair<Node*,int> instead of auto
            auto it = q.front(); // taking the hold of the front or first pair of queue
            q.pop();

            Node *curr = it.first; // taking the hold of the Node value
            int verticalLine = it.second;

            // now we will insert the verticalLine if it is not in the map and if it is already that means the curr node is not the first nof that perticular vertical line so ignore it
            if (mpp.find(verticalLine) == mpp.end())
            {
                mpp[verticalLine] = curr->data;
            }

            // now insert its left child in node here be careful that to go left we need to pass vertical line - 1
            if (curr->left != NULL)
            {
                q.push({curr->left, verticalLine - 1});
            }
            // now insert its right child in node here be careful that to go right we need to pass vertical line + 1
            if (curr->right != NULL)
            {
                q.push({curr->right, verticalLine + 1});
            }
        }
        for (auto it : mpp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int tc;
    cin >> tc;
    cin.ignore(256, '\n');
    while (tc--)
    {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        vector<int> vec = ob.topView(root);
        for (int x : vec)
            cout << x << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends