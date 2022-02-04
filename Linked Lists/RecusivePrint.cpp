/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
                                     https://www.codechef.com/users/codewithmitesh, https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/  , https://codeforces.com/profile/codewithmitesh    */
#include <bits/stdc++.h>
using namespace std;
 //To run code faster in online IDE
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

void recurPrint(Node *head)
{

    if (head == NULL)
    {
    }
    cout << (head->data) << endl;
    recurPrint(head->next);
}

int main()
{
    // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = NULL;

    recurPrint(head);

    // cout<<yourfunctionhere(s); for int bool etc Return-type
    //  for (auto it = s.begin(); it != s.end(); it++)  //for printing ans vector
    //     cout << *it << " ";

    return 0;
}