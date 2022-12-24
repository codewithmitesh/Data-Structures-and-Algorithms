/**
 * @file RemoveNodesFromLinkedList.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-27
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 *
ListNode *removeNodes(ListNode *head)
{
    /**
    Algo  :- First travere and set the element in decreasing order in stack simple monotonic stack pop all smaller elelment then current wala and same

    temp 2 :- then fdorm the new LL and return the head

stack<int> st; // Monotonic Decreasing Stack

ListNode *curr = head;

// Traverse the whole list and make monotnic stack
while (curr != NULL)
{

    while (st.empty() == false && st.top() < curr->val)
    {
        st.pop();
    }
    st.push(curr->val);
    curr = curr->next;
}

ListNode *temp = new ListNode(NULL);
ListNode *prev = NULL;

//         here we are forming linked list froim the back means we first add right most element and then come to left from this is how we make ll from stack
// form the list
while (!st.empty())
{

    temp = new ListNode(st.top());

    temp->next = prev;
    prev = temp;

    st.pop();
}
//  atlas which ever the temp or last element of the stack will be the head
return temp;
}
*/