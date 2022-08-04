/**
 * @file PartitionList.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-22
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 *  ListNode* partition(ListNode* head, int x) {

         if(!head) return head;

        ListNode *dummy1 = new ListNode(-201);
        ListNode *dummy2 = new ListNode(-201);

        ListNode *curr = head,*p1=dummy1,*p2=dummy2;
        dummy1->next = head;


        while(curr!=NULL){
            if(curr->val<x){

                p1->next = curr;
                p1 = p1->next;
            }else{
                p2->next = curr;
                p2 = p2->next;
            }

            curr = curr->next;

        }
        p2->next = NULL;
       p1->next = dummy2->next;


        return dummy1->next;
    }
*/