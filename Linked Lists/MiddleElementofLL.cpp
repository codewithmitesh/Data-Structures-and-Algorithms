/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh   */

/**
 * @brief Only In One Travesal We need to check that can be only possible by slow and fast pointers
 *
 */

/**
ListNode *middleNode(ListNode *head)
{

    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return head;

    ListNode *slow;
    ListNode *fast;
    slow = head;
    fast = head->next;

    while (true)
    {

        if (fast != NULL && fast->next == NULL)
        {
            return slow->next;
        }
        else if (fast == NULL)
        {
            return slow;
        }
        else
        {
            fast = fast->next->next;
            slow = slow->next;
        }
    }
}
*/
