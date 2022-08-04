/**
 * @file reverseLL2.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-21
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
ListNode *reverseBetween(ListNode *head, int left, int right)
{

    ListNode *dummy = new ListNode(0);
    dummy->next = head;

    ListNode *Leftprev = dummy, *curr = head;

    for (int i = 0; i < left - 1; i++)
    {
        Leftprev = curr;
        curr = curr->next;

        // left--;
    }

    ListNode *prev = NULL, *currNext;
    for (int i = 0; i <= right - left; i++)
    {
        currNext = curr->next;
        curr->next = prev;
        prev = curr;
        curr = currNext;
    }

    Leftprev->next->next = curr;
    Leftprev->next = prev;

    return dummy->next;
}
*/