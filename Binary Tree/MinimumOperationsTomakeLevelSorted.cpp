/**
 * @file MinimumOperationsTomakeLevelSorted.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-13
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int minSwaps(vector<int> &nums)
{
    vector<pair<int, int>> v;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        v.push_back({nums[i], i});
    }
    sort(v.begin(), v.end());
    int swaps = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second == i)
            continue;
        else
        {
            swaps++;
            swap(v[i], v[v[i].second]);
            i--;
        }
    }
    return swaps;
}

int minimumOperations(TreeNode *root)
{
    int ans = 0;
    queue<TreeNode *> q;
    q.push(root);
    while (q.empty() == false)
    {

        vector<int> tempVector;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {

            TreeNode *temp = q.front();
            q.pop();
            tempVector.push_back(temp->val);
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }

        ans += minSwaps(tempVector);
    }
    return ans;
}
*/