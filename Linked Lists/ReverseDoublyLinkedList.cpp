/**
 * @file ReverseDoublyLinkedList.cpp
 * @author
 * Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 *
 * @brief
 * @version 0.1
 * @date 2022-02-07
 *
 * @copyright Copyright (c) 2022
 *
Node *reverseDLL(Node *head)
{
    Node *curr = head, *newHead = NULL;
    if (head == NULL || head->next == NULL)
        return head;

    while (curr != NULL)
    {

        if (curr->next == NULL)
        {
            newHead = curr;
        }

        Node *temp = curr->next;
        curr->next = curr->prev;
        curr->prev = temp;

        curr = temp;
    }
    return newHead;
}
 */
/**
 * Solution :- TC = O(N) AS O(N)

*/
   