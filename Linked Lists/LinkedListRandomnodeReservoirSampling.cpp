/**
 * @file LinkedListRandomnodeReservoirSampling.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-10
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
class Solution
{
public:
    int n = 0;
    ListNode *head1 = NULL;
    Solution(ListNode *head)
    {
        head1 = head;
    }

    int getRandom()
    {
        int nodeSeenTillNow = 0;
        ListNode *curr = head1;

        ListNode *randomNode = NULL;
        while (curr != NULL)
        {
            nodeSeenTillNow++;
            int randomeNodeIndex = rand() % nodeSeenTillNow;
            if (randomeNodeIndex == nodeSeenTillNow - 1)
            {
                randomNode = curr;
            }
            curr = curr->next;
        }
        return randomNode->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */