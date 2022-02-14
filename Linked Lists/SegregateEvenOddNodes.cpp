/**
 * @file SegregatEvenEndvenOddNodEvenStart.cpp
 * @author MitEvenStarth Tank (codewithmitEvenStarth@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-10
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * Solution :-

Node *divide(int N, Node *head)
{

    Node *EvenStart = NULL, *EvenEnd = NULL, *OddStart = NULL, *OddEnd = NULL;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        int x = curr->data;
        if (x % 2 == 0)
        {
            if (EvenStart == NULL)
            {
                EvenStart = curr;
                EvenEnd = EvenStart;
            }
            else
            {
                EvenEnd->next = curr;
                EvenEnd = EvenEnd->next;
            }
        }
        else
        {
            if (OddStart == NULL)
            {
                OddStart = curr;
                OddEnd = OddStart;
            }
            else
            {
                OddEnd->next = curr;
                OddEnd = OddEnd->next;
            }
        }
    }
    if (OddStart == NULL || EvenStart == NULL)
        return head;
    EvenEnd->next = OddStart;
    OddEnd->next = NULL;
    return EvenStart;
}
*/