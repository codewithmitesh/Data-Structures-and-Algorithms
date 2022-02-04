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

void recurPrint(Node *head)
{

    if (head == NULL)
    {
        return;
    }
    cout << (head->data) << endl;
    recurPrint(head->next);
}

Node *InsAtEnd(Node *head, int x)
{  
    
    Node *temp = new Node(x);
    if(head == NULL) return temp;
    Node *temHead = head;

    while(temHead->next != NULL){
        temHead = temHead->next;
    }
    temHead->next = temp;
    
    return head;


}

int main()
{

    Node *head = NULL;
    head = InsAtEnd(head,10);
    head = InsAtEnd(head,20);
    head = InsAtEnd(head,30);

    // cout<<yourfunctionhere(s); for int bool etc Return-type
    //  for (auto it = s.begin(); it != s.end(); it++)  //for printing ans vector
    //     cout << *it << " ";
     recurPrint(head);
    return 0;
}