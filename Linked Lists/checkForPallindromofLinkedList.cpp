/**
 * @file checkForPallindromofLinkedList.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2022-02-07
 *
 * @copyright Copyright (c) 2022
 * Solution :-
 *
Node *reverseList(struct Node *head)
{
    // code here
    // return head of reversed list

    Node *currPtr = head;
    Node *prevPtr = NULL;
    Node *nextPtr;

    while (currPtr != NULL)
    {

        nextPtr = currPtr->next;

        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
    }

    head = prevPtr;
    return head;
}

// Function to check whether the list is palindrome.
bool isPalindrome(Node *head)
{

    Node *slow, *fast;
    slow = head;
    fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    Node *secHead = reverseList(slow->next);
    slow->next = secHead;

    Node *curr1 = head, *curr2 = secHead;
    while (curr1 != NULL && curr2 != NULL)
    {

        if (curr1->data != curr2->data)
        {
            return false;
        }
        else
        {
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
    }

    return true;
}
*
*/