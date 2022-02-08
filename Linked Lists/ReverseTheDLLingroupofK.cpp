/**
 * @file ReverseTheDLLingroupofK.cpp
 * @author  Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2022-02-08
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * Solution MMMIMP :-
 */
/**
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
Node *reverseByN(Node *head, int k)
{
    if (head == NULL)
        return NULL;
    head->prev = NULL;
    Node *temp, *curr = head, *newHead;
    int count = 0;
    while (curr != NULL && count < k)
    {
        newHead = curr;
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
        count++;
    }
    // checking if the reversed LinkedList size is
    // equal to K or not
    // if it is not equal to k that means we have reversed
    // the last set of size K and we don't need to call the
    // recursive function
    if (count >= k)
    {
        Node *rest = reverseByN(curr, k);
        head->next = rest;
        if (rest != NULL)
            // it is required for prev link otherwise u wont
            // be backtrack list due to broken links
            rest->prev = head;
    }
    return newHead;
}
*/