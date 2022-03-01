/**
 * @file 
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
vector <int> findCommon(Node *root1, Node *root2)
    {
       vector<int> ans;
        stack<Node *> st1,st2;
        Node *curr1 = root1;
        Node *curr2 = root2;
        while((!st1.empty() || curr1!=NULL) && (!st2.empty() || curr2!=NULL)){
            
            while(curr1!=NULL){
                st1.push(curr1);
                curr1 = curr1->left;
            }
            
            while(curr2!=NULL){
                st2.push(curr2);
                curr2 = curr2->left;
            }
            
            Node *t1 = st1.top();
            Node *t2 = st2.top();
            
            if(t1->data < t2->data){
                st1.pop();
                curr1 = t1->right;
            }
            else if(t1->data > t2->data){
                st2.pop();
                curr2 = t2->right;
            }
            else{
                ans.push_back(t1->data);
                st1.pop();
                curr1 = t1->right;
                st2.pop();
                curr2 = t2->right;
            }
            
        }
        return ans;
    }