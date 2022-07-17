/**
 * @file pathSum3.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-17
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
unordered_map<long long int, int> m;
int no_of_paths = 0;
void solve(TreeNode *root, int target, long long int &curr_sum)
{
    if (!root)
        return;

    curr_sum += root->val;

    if (m.count(curr_sum - target))
    {
        no_of_paths += m[curr_sum - target];
    }

    m[curr_sum]++;
    solve(root->left, target, curr_sum);
    solve(root->right, target, curr_sum);
    m[curr_sum]--;

    curr_sum -= root->val;
}
int pathSum(TreeNode *root, int targetSum)
{

    m[0]++;

    long long int curr_sum = 0;

    solve(root, targetSum, curr_sum);

    return no_of_paths;
}
*/