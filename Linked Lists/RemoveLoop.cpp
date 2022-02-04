/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh   */

/**
 * @brief
 *  Find the Startinf point of the Loop then change the joint to NuLL;
 *
 */
/*
void removeLoop(Node *head)
{
    bool flag = 0;
    Node *slow = head;
    Node *fast = head;
    // first checking if it contains Loop or not
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            flag = 1;
            break;
        }
    }
    // if it contains loop then find the starting and ending point of loop then change the ending point to NULL here it will be fast pointer
    if (flag == 1)
    {
        Node *slow = head;
        if (slow == fast)
        {

            while (fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = NULL;
        }
        else
        {
            while (fast->next != slow->next)
            {
                slow = slow->next;
                fast = fast->next;
            }
            fast->next = NULL;
        }
    }
    else
    {
        return;
    }
*/