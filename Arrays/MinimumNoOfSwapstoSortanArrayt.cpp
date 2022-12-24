/**
 * @file MinimumNoOfSwapstoSortanArrayt.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-11-13
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Function to find the minimum number of swaps required to sort the array.
int minSwaps(vector<int> &nums)
{
    vector<int> temp = nums;
    sort(temp.begin(), temp.end());
    int n = nums.size();

    // ump to store the index element and indexes
    unordered_map<int, int> ump;
    // string the element coresponding the indexes
    for (int i = 0; i < n; i++)
    {
        ump[nums[i]] = i;
    }
    int ans = 0;
    // traverse and compare with its
    for (int i = 0; i < n; i++)
    {

        if (nums[i] != temp[i])
        {

            int toSwaped = nums[i];
            swap(nums, i, ump[temp[i]]);
            ump[toSwaped] = ump[temp[i]];
            ump[temp[i]] = i;
            ans++;
        }
    }

    return ans;
}
*/