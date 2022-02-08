/**
 * @brief MMMIMP Method here we first Make it circular and then again make it Linear linked list after p nodes
 *
 * @param start
 * @param p
 * @return Node*
 */

/**

Node *update(Node *start, int p)
{
    // here we first Make it circular and then again make it Linear linked list after p nodes
    Node *tail = start;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = start;
    start->prev = tail;

    Node *curr = start;
    for (int i = 1; i < p; i++)
    {
        curr = curr->next;
    }
    Node *ansHead = curr->next;
    curr->next->prev = NULL;
    curr->next = NULL;

    return ansHead;
}
*/