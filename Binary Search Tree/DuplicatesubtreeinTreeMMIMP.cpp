/**
 *
 * ! This is MMMIMP Question
 *
 * @file DuplicatesubtreeinTreeMMIMP.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-03-02
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
unordered_map<string, int> ump;
string serializetostring(Node *root)
{

    // condition for Null node
    if (root == NULL)
        return "$";

    // we need to create string for each Rec call so for that we are Creating the empty string s
    string s = "";
    // IF the root is leaf node it shelf than just concatenate it and return dont put it in map
    if (root->left == NULL && root->right == NULL)
    {
        s = s + to_string(root->data);
        return s;
    }
    // just concate name current node and concatenate left serialized string and right serialized string
    s = s + to_string(root->data);
    s = s + serializetostring(root->left);
    s = s + serializetostring(root->right);
    // store the current serialized string to map and if it is already there then increase its frequency
    ump[s]++;
    // finnala return the string
    return s;
}

int dupSub(Node *root)
{

    string str = serializetostring(root);
    // checking if any serialized string occurs mire than twice or not
    for (auto it : ump)
    {
        if (it.second >= 2)
            return 1;
    }
    return 0;
}
*/