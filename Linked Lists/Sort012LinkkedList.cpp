/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh   */

/**
 * @brief Here We Do not need any dutch Flag Algo We need simply only two traversals of LL to solve the problem of
 * TC O(N) && AS O(1)
 *
 */
/**
Node *segregate(Node *head)
{
    Node *curr = head;
    int ZeroCnt = 0, OneCnt = 0, TwoCnt = 0;
    // First we will count the total No os 0s ,1s and 2s while traversing loop once
    while (curr != NULL)
    {

        if (curr->data == 0)
        {
            ZeroCnt++;
        }
        else if (curr->data == 1)
        {
            OneCnt++;
        }
        else
        {
            TwoCnt++;
        }
        curr = curr->next;
    }
    curr = head; // reinitialing curr to head so that we can reuse it
    // Now we'll place the 0s first, then the 1s, and finally the 2s.
    while (curr != NULL)
    {

        if (ZeroCnt)
        {
            curr->data = 0;
            ZeroCnt--;
        }
        else if (OneCnt)
        {
            curr->data = 1;
            OneCnt--;
        }
        else if (TwoCnt)
        {
            curr->data = 2;
            TwoCnt--;
        }

        curr = curr->next;
    }

    return head;
}
*/