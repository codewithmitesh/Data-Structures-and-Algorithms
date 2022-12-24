/**
 * @file MergeSortedLists.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-25
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{

    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;

    ListNode *fakeHead = new ListNode(-1);

    if (list1->val < list2->val)
    {
        fakeHead->next = list1;
    }
    else
    {
        fakeHead->next = list2;
    }
    ListNode *tail = fakeHead;
    while (list1 != NULL && list2 != NULL)
    {

        if (list1->val < list2->val)
        {
            tail->next = list1;

            list1 = list1->next;
        }
        else
        {
            tail->next = list2;

            list2 = list2->next;
        }
        tail = tail->next;
    }

    if (list1 == NULL)
    {
        tail->next = list2;
    }
    else
    {
        tail->next = list1;
    }

    return fakeHead->next;
}
*/