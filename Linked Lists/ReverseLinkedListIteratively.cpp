/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
                                     https://www.codechef.com/users/codewithmitesh, https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/  , https://codeforces.com/profile/codewithmitesh    */
#include <bits/stdc++.h>
using namespace std;
// ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); //To run code faster in online IDE
// copythe functionhere

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
    cout << (head->data) << endl;
    recurPrint(head->next);
}

Node *InsertatBegining(Node *head, int x)
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
int main()
{

    Node *head = NULL;
    head = InsertatBegining(head, 4);
    head = InsertatBegining(head, 3);
    head = InsertatBegining(head, 2);
    head = InsertatBegining(head, 1);

    // adding Nodes in Linked List
    // Node *temp1 = new Node(20);
    // Node *temp2 = new Node(30);

    // head->next = temp1;
    // temp1->next = temp2;        //  connecting the Nodes
    // temp2->next = NULL;
    recurPrint(head);
    cout << "Reverse Linked List\n";
    // head = reverseList(head);
    head = RecurReverse(head);
    recurPrint(head);

    return 0;
}