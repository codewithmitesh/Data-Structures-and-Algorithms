/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh   */

/**
 * @brief  MMMIMP Quetions
 *
 */
/**
int CountNode(Node *head)
{

    int count = 0;
    Node *curr = head;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    return count;
}
int intersectPoint(Node *head1, Node *head2)
{
    int len1 = CountNode(head1);
    int len2 = CountNode(head2);
    Node *curr1, *curr2;
    int trav = max(len1, len2);
    if (trav == len1)
    {
        curr1 = head1;
        curr2 = head2;
    }
    else if (trav == len2)
    {
        curr1 = head2;
        curr2 = head1;
    }
    int diff = abs(len1 - len2);
    for (int i = 0; i < diff; i++)
    {
        curr1 = curr1->next;
    }
    // MMMMIMp Dont compare curr1->data==curr2->data  MMMIMP and In between value can be same
    while (curr1 != NULL && curr2 != NULL)
    {
        if (curr1 == curr2)
        {
            return curr1->data;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    if (curr1 == NULL || curr2 == NULL)
    {
        return -1;
    }
}
*/

