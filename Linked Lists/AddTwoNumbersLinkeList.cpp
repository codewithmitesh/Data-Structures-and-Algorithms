/**
 * @file AddTwoNumbersLinkeList.cpp
 * @author  Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2022-02-07
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * MMMIMP Question and Problem Link :- https://leetcode.com/problems/add-two-numbers/
 *
 *
 */
/**
 * Solution MMMIMP :-
 *
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ListNode *curr1 = l1, *curr2 = l2, *newHead = NULL, *tail = NULL;
    int sum = 0, carry = 0, digit = 0;
    while (curr1 != NULL && curr2 != NULL)
    {
        sum = curr1->val + curr2->val + carry;
        digit = sum % 10;
        carry = sum / 10;
        if (newHead == NULL)
        {
            ListNode *temp = new ListNode(digit);
            newHead = temp;
            tail = newHead;
        }
        else
        {
            ListNode *temp = new ListNode(digit);
            tail->next = temp;
            tail = temp;
        }
        curr1 = curr1->next, curr2 = curr2->next;
    }
    if (curr2 == NULL)
    {
        while (curr1 != NULL)
        {
            sum = curr1->val + carry;
            digit = sum % 10;
            carry = sum / 10;
            ListNode *temp = new ListNode(digit);
            tail->next = temp;
            tail = temp;
            curr1 = curr1->next;
        }
        if (curr1 == NULL && carry != 0)
        {

            ListNode *temp = new ListNode(1);
            tail->next = temp;
            tail = temp;
        }
    }
    else if (curr1 == NULL)
    {
        while (curr2 != NULL)
        {
            sum = curr2->val + carry;
            digit = sum % 10;
            carry = sum / 10;
            ListNode *temp = new ListNode(digit);
            tail->next = temp;
            tail = temp;
            curr2 = curr2->next;
        }
        if (curr2 == NULL && carry != 0)
        {

            ListNode *temp = new ListNode(1);
            tail->next = temp;
            tail = temp;
        }
    }

    return newHead;
}
*/