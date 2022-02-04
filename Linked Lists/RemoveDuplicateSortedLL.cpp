/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh   */

// O(n) Time and O(1) Auxilary Space
/**
 * @brief
 *
 * @param head
 * @return Node*
 */

/**
Node *removeDuplicates(Node *head)
{

    Node *curr;
    Node *prev;

    prev = head;
    curr = head->next;

    while (curr != NULL)
    {

        if (prev->data == curr->data)
        {

        Node *tempDel = curr;
        prev->next = curr->next;
        curr = curr->next;
        delete tempDel;
        }
        else
        {

            curr = curr->next;

            prev = prev->next;
        }
    }
    return head;
}

*/