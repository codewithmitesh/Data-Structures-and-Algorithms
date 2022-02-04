/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh   */

/**
 * @brief TC O(N) NAd Auxilary Space O(N)
 *
 */

/**
Node *removeDuplicates(Node *head)
{
    unordered_set<int> uns; // creating Unorderd set to use Hashing

    Node *curr = head; // creating iterator to iterate over the Linked Lists

    uns.insert(head->data);
    // 22222

    while (curr != NULL && curr->next != NULL)
    {

        if (uns.find(curr->next->data) == uns.end())
        {
            uns.insert(curr->next->data);
            curr = curr->next;
        }
        else
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete (temp);
        }
    }

    return head;

    // your code goes here
}
*/