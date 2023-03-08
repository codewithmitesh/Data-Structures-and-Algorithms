/**
 * @file TwoSum4.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-02
 *
 * @copyright Copyright (c) 2023
 *
 */
class BSTIterator
{
    stack<TreeNode *> myStack;
    bool reverse = true;

public:
    BSTIterator(TreeNode *root, bool isReverse)
    {
        reverse = isReverse;
        pushAll(root);
    }

    bool hasNext()
    {
        return !myStack.empty();
    }
    int next()
    {
        TreeNode *tmpNode = myStack.top();
        myStack.pop();
        if (!reverse)
            pushAll(tmpNode->right);
        else
            pushAll(tmpNode->left);
        return tmpNode->val;
    }
    void pushAll(TreeNode *node)
    {
        for (; node != NULL;)
        {
            myStack.push(node);
            if (reverse == true)
            {
                node = node->right;
            }
            else
            {
                node = node->left;
            }
        }
    }
};

class Solution
{
public:
    bool findTarget(TreeNode *root, int k)
    {
        if (!root)
            return false;

        BSTIterator l(root, false); // Gives smallest element
        BSTIterator r(root, true);  // Gives largest element

        int i = l.next();
        int j = r.next();
        while (i < j)
        {
            if (i + j == k)
                return true;
            else if (i + j < k)
                i = l.next();
            else
                j = r.next();
        }
        return false;
    }
};