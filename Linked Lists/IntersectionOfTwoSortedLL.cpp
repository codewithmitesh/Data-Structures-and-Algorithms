/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh   */

/**
 * @brief MMMIMP Easy In this We are creating the new ans Linked List and Returning its head (Here as :- NewHead)
 *
 */

/**
 * @brief Solution
 *
Node *findIntersection(Node *head1, Node *head2)
{

    Node *curr1 = head1, *curr2 = head2;
    Node *NewHead = NULL, *tail = NULL;

    while (curr1 != NULL && curr2 != NULL)
    {

        if (curr1->data == curr2->data)
        {

            if (NewHead == NULL)
            {

                Node *temp = new Node(curr1->data);
                NewHead = temp;
                tail = NewHead;
            }
            else
            {

                Node *temp = new Node(curr1->data);
                tail->next = temp;
                tail = temp;
            }

            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        else
        {
            if (curr1->data < curr2->data)
            {
                curr1 = curr1->next;
            }
            else
            {
                curr2 = curr2->next;
            }
        }
    }
    return NewHead;
}
*/