/**
 * @file OddevenLinkedList.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-12-06
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
ListNode *oddEvenList(ListNode *head)
{

    // super easy simple need to maintain 4 pointers odd for traversing odd positions        even for traversing even positions odd head  to maintain head of odd and even for maintaing the even

    ListNode *odd = NULL, *headodd = NULL, *even = NULL, *headeven = NULL;
    // base case here is to size 0 1 2
    if (!head || !head->next || !head->next->next)
        return head;
    // intialize the pointers to appropriet locations
    odd = head;
    headodd = odd;
    even = head->next;
    headeven = even;
    // traverse only even will be fine
    while (even && even->next)
    {
        // update odd and even connections
        odd->next = odd->next->next;
        even->next = even->next->next;
        // increment odds and evens
        odd = odd->next;
        even = even->next;
    }
    // connect odd and even substrings (connections)
    odd->next = headeven;
    // head odd will be our new head
    return headodd;
}
*/