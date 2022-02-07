/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
                                     https://www.codechef.com/users/codewithmitesh, https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/  , https://codeforces.com/profile/codewithmitesh    */
#include <bits/stdc++.h>
using namespace std;

// Creating the Linked List
struct Node
{

    int data; // data of Node
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }

    /* data */
};

// Print the Linked List
void recurPrint(Node *head)
{

    if (head == NULL)
    {
        return;
    }
    cout << (head->data) << " ";
    recurPrint(head->next);
}

Node *InsertAtBegining(Node *head, int x)
{

    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

Node *reverseList(struct Node *head)
{
    // code here
    // return head of reversed list

    Node *currPtr = head;
    Node *prevPtr = NULL;
    Node *nextPtr;

    while (currPtr != NULL)
    {

        nextPtr = currPtr->next;

        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
    }

    head = prevPtr;
    return head;
}
Node *RecurReverse(Node *head)
{

    if (head == NULL || head->next == NULL)
        return head;

    Node *newHead = RecurReverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}
Node *addOne(Node *head)
{
    // first reversing the List
    Node *newHeadReversed ;
    newHeadReversed = RecurReverse(head);
    Node *curr = newHeadReversed;
    int carry = 0;
    while (curr != NULL)
    {
        if (curr == newHeadReversed)
        {
            if (curr->data == 9)
            {
                carry = 1;
                curr->data = 0;
            }
            else
            {
                curr->data = curr->data + carry;
            }
            curr = curr->next;
        }
        else if (curr != newHeadReversed && curr->next != NULL)
        {

            if (carry == 1)
            {

                if (curr->data == 9)
                {
                    curr->data = 0;
                }
                else
                {
                    curr->data = curr->data + 1;
                    carry = 0;
                }
                curr = curr->next;
            }
            else
            {
                curr = curr->next;
            }
        }
        else
        {
            if (carry = 1)
            {
                if (curr->data == 9)
                {
                    curr->data = 0;
                    Node *lastNode;
                    lastNode->data = 1;
                    curr->next = lastNode;
                    curr = curr->next;
                }
                else
                {
                    curr->data = curr->data + 1;
                    carry = 0;
                }
            }
            else
            {
                curr = curr->next;
            }
        }
    }
    head = RecurReverse(newHeadReversed);
    return head;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); // To run code faster in online IDE

    Node *head = NULL;
    head = InsertAtBegining(head, 9);
    head = InsertAtBegining(head, 5);
    head = InsertAtBegining(head, 3);

    // adding Nodes in Linked List
    // Node *temp1 = new Node(20);
    // Node *temp2 = new Node(30);

    // head->next = temp1;
    // temp1->next = temp2;        //  connecting the Nodes
    // temp2->next = NULL;
    recurPrint(head);
    cout << "\nAdd1 to Linked List\n";
    // head = reverseList(head);
    // head = RecurReverse(head);
    Node *newHead = addOne(head);
    // head = addOne(head);
    recurPrint(newHead);

    return 0;
}