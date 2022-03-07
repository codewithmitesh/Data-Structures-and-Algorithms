/**
 * @file BSTtoBalancedBST.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-03-07
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<int> nums; // stores Inorder Traversal of BST;
int start = ,int end = nums.size()-1;
Node* Solve(int start, int end, vector<int> &nums)
{

    if (start > end)
    {
        return NULL;
    }

    int mid = (start + end) / 2;

    Node *root = new Node(nums[mid]);

    root->left = Solve(start, mid - 1, nums);
    root->right = Solve(mid + 1, end, nums);

    return root;
}
*/
// Complete Solutions:-
/**
 * @brief
void inorder_bst(Node* root, vector<int>&v){
   if(!root) return;
   inorder_bst(root->left,v);
   v.push_back(root->data);
   inorder_bst(root->right,v);
}
Node* make_balanced(int start,int end,vector<int>v){
   if(start>end) return NULL;
   int mid=(start+end)/2;
   Node* root=new Node (v[mid]);
   root->left=make_balanced(start,mid-1,v);
   root->right=make_balanced(mid+1,end,v);
   return root;
}
Node* buildBalancedTree(Node* root)
{
// Code here
vector<int>v;
inorder_bst(root,v);
int h=v.size();
return make_balanced(0,h-1,v);
}
 *
 */