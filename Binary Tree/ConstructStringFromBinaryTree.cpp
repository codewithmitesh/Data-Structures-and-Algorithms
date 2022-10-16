/**
 * @file ConstructStringFromBinaryTree.cpp
 * @author Mitesh Tank (codewithmitesh)
 *
 */
/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh ,https://codeforces.com/profile/codewithmitesh   */
/**
class Solution
{
private:
 // simply preorder traversal
 void solve(TreeNode *node, string &ans)
 {
     // if node is NULL tx`hen we dont need to do anything so simpy return
     if (node == NULL)
         return;
     // concatenate string by current node
     ans += to_string(node->val);
     // if left is not null then go left and add in ans string with adding ()
     if (node->left != NULL)
     {
         ans += '(';
         solve(node->left, ans);
         ans += ')';
     }
     // if right is not null then go right and add in ans string with adding ()
     if (node->right != NULL)
     {
         // if there is no left and only child then we need to add () as a part of empty left child in string
         if (node->left == NULL)
             ans += "()";
         ans += '(';
         solve(node->right, ans);
         ans += ')';
     }
 }

public:
 string tree2str(TreeNode *root)
 {
     // make the ans string globle or parse as parameter by reference
     string ans = "";
     solve(root, ans);
     return ans;
 }
};
*/