/**
 * @file RemoveZeroSumConsecutiveFromLL.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-17
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
    ListNode *removeZeroSumSublists(ListNode *head)
    {

        unordered_map<int, ListNode *> ump;
        int currsum = 0;
        // dummy node to return updated head as dummy ka next
        ListNode *dummy = new ListNode(0, head);
        ump[0] = dummy;
        // curent pointer
        ListNode *curr = head;

        while (curr != NULL)
        {
            currsum = currsum + curr->val;
            if (ump.find(currsum) != ump.end())
            {

                ListNode *temp = ump[currsum]->next;
                int SUM = currsum;
                //  now untill temp is not equal to curr delete all the sums possible fromump
                while (temp != curr)
                {
                    SUM += temp->val;
                    ump.erase(SUM);
                    temp = temp->next;
                }
                ump[currsum]->next = curr->next;
            }
            else
            {
                ump[currsum] = curr;
            }
            curr = curr->next;
        }

        return dummy->next;
    }
};