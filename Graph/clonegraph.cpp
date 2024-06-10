/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution
{
public:
    unordered_map<Node *, Node *> ump;
    Node *cloneGraph(Node *node)
    {

        if (node == NULL)
            return NULL;

        if (ump.find(node) == ump.end())
        {

            Node *newNode = new Node(node->val, {});
            ump[node] = newNode;
            for (auto adj : node->neighbors)
            {
                newNode->neighbors.push_back(cloneGraph(adj));
            }
        }
        return ump[node];
    }
};