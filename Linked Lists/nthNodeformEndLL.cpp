/**
 * @file nthNodeformEndLL.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-10
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * * Solution :-
int getNthFromLast(Node *head, int n)
{
    if (head == NULL)
    {
        return -1;
    }

    Node *first = head;

    for (int i = 0; i < n; i++)
    {
        if (first == NULL)
        {
            return -1;
        }

        first = first->next;
    }
    Node *second = head;

    while (first != NULL)
    {
        second = second->next;
        first = first->next;
    }

    return second->data;
}
*/