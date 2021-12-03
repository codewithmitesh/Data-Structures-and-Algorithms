/**
 * @file 4SumProblem.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-26
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 * ! Problem Link :-  https://leetcode.com/problems/4sum/submissions/
 * 
 * * Solution :- 
 
vector<vector<int>> fourSum(vector<int> &nums, int target)
{

    long long n = nums.size();
    vector<vector<int>> res;

    sort(nums.begin(), nums.end());

    for (long long i = 0; i < n - 3; i++)
    {
        for (long long j = i + 1; j < n - 2; j++)
        {
            long long l = j + 1, h = n - 1;

            while (l < h)
            {

                long long s = nums[i] * 1LL + nums[j] * 1LL + nums[l] * 1LL + nums[h] * 1LL;
                if (s < target)
                {
                    l++;
                }
                else if (s > target)
                {
                    h--;
                }
                else
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[h]);
                    res.push_back(temp);

                    while (l < h && nums[l] == temp[2])
                    {
                        l++;
                    }
                    while (l < h && nums[h] == temp[3])
                    {
                        h--;
                    }
                }
            }

            while (j + 1 < n && nums[j + 1] == nums[j])
            {
                j++;
            }
        }

        while (i + 1 < n && nums[i + 1] == nums[i])
        {
            i++;
        }
    }

    return res;
}
 * 
 */
