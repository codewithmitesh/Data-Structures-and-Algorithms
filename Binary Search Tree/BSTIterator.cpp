/**
 * @brief Mitesh Tank
 *  Leetcode173. Binary Search Tree Iterator
 *
 *
 */
/**
class BSTIterator
{

    stack<TreeNode *> st;
    void fillStack(TreeNode *root)
    {
        while (root != NULL)
        {
            st.push(root);
            root = root->left;
        }
    }

public:
    BSTIterator(TreeNode *root)
    {
        fillStack(root);
    }

    int next()
    {
        if (st.empty() == false)
        {

            TreeNode *top = st.top();
            st.pop();
            fillStack(top->right);
            return top->val;
        }
        return -1;
    }

    bool hasNext()
    {
        return !st.empty();
    }
};

*/