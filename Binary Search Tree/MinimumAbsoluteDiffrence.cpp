/**
 * @file 
 * @author Mitesh Tank (codewithmitesh)
 * @brief 
 * @version 0.1
 * @date 2022-07-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/**
 
    TreeNode* prev=NULL;int diff=INT_MAX;
    int dfs(TreeNode*root){
        if(root->left)dfs(root->left);
       if(prev)
           diff=min(diff,abs(root->val-prev->val));
        prev=root;
        if(root->right)dfs(root->right);
        return diff;
    }
    int getMinimumDifference(TreeNode* root) {
        
        return dfs(root);
    }
    

    */