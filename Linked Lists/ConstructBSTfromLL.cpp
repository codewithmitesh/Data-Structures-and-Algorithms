/**
 * @file ConstructBSTfromLL.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-11
 *
 * @copyright Copyright (c) 2023
 *
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *constructBST(ListNode *start, ListNode *end)
    {
        if (start == end)
            return nullptr;
        ListNode *slow = start, *fast = start;
        while (fast != end && fast->next != end)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        TreeNode *root = new TreeNode(slow->val);
        root->left = constructBST(start, slow);
        root->right = constructBST(slow->next, end);
        return root;
    }
    TreeNode *sortedListToBST(ListNode *head)
    {
        // if empty LL case
        if (head == nullptr)
            return nullptr;

        if (head->next == nullptr)
        {
            TreeNode *root = new TreeNode(head->val);
            return root;
        }

        return constructBST(head, nullptr);
    }
};