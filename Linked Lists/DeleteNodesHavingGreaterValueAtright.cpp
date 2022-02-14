/**
 * @file DeleteNodesHavingGreaterValueAtright.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-10
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * * Solution MMIMP:-







Node *compute(Node *head)
{
    // Handeling the Corner Cases
    if (head == NULL || head->next == NULL)
        return head;
    // Step 1 :- Reverse the LinkedList
    Node *head1 = reverseList(head);

    // Step 2 (a) :- Traverse the reversed list and Keep max till now (here MaxTillNow pointer that points the Maximum value till now in LinkedList traversal )
    Node *curr = head1, *MaxTillNow = curr, *temp;

    while (curr != NULL && curr->next != NULL)
    {
        // Step 2 (b) :-  If the next node is less than MaxTillNow, then delete the next node else update MaxTillNow = next Node
        if (curr->next->data < MaxTillNow->data)
        {
            temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        }
        else
        {

            curr = curr->next;
            MaxTillNow = curr;
        }
    }
    // Step 3 :- Reverse the LinkedList again to retain the original order
    head = reverseList(head1);
    return head;
}
*/
