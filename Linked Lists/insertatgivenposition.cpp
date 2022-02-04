/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
                                     https://www.codechef.com/users/codewithmitesh, https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/  , https://codeforces.com/profile/codewithmitesh    */
#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); //To run code faster in online IDE
//copythe functionhere

struct Node
{

    int data; //data of Node
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }

    /* data */
};

Node *InsAtEnd(Node *head, int x)
{

    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    Node *temHead = head;

    while (temHead->next != NULL)
    {
        temHead = temHead->next;
    }
    temHead->next = temp;

    return head;
}
void recurPrint(Node *head)
{

    if (head == NULL)
    {
        return;
    }
    cout << (head->data) << endl;
    recurPrint(head->next);
}

Node *insertPosition(Node *head, int pos, int data)
{

    Node *temp = new Node(data);

    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }

    Node *temHead = head;

    for (int i = 1; i <= pos - 2 && temHead->next != NULL; i++)
    {
        temHead = temHead->next;
    }

    if (temHead->next == NULL)
    {
        return head;
    }

    temp->next = temHead->next;
    temHead->next = temp;
}

int main()
{

    Node *head = NULL;
    head = InsAtEnd(head, 10);
    head = InsAtEnd(head, 20);
    head = InsAtEnd(head, 30);
    head = InsAtEnd(head, 40);
    head = InsAtEnd(head, 50);

    insertPosition(head, 4, 35);

    recurPrint(head);

    // cout<<yourfunctionhere(s); for int bool etc Return-type
    //  for (auto it = s.begin(); it != s.end(); it++)  //for printing ans vector
    //     cout << *it << " ";

    return 0;
}