/**
 * @file kDivisibleElementarray.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-23
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int countDistinct(vector<int> &nums, int k, int p)
    {

        int n = nums.size();
        set<vector<int>> uns;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp;
            int cnt = 0;
            for (int j = i; j < n; j++)
            {

                if (cnt <= k)
                {
                    temp.push_back(nums[j]);
                    if (nums[j] % p == 0)
                    {
                        cnt++;
                    }
                    if (cnt > k)
                    {
                        break;
                    }
                    uns.insert(temp);
                }
            }

            for (auto it : temp)
            {
                cout << it << " ";
            }
            cout << "\n";
        }

        return uns.size();
    }
};