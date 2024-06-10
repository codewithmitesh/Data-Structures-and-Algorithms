/**
 * @file SplitthearraytomakecoprimeProducts.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-11
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    // seive to find primefactors;
    void primefreq(int x, unordered_map<int, int> &mp)
    {
        int temp = x;
        for (int i = 2; i * i <= x; i++)
        {
            while (temp % i == 0)
            {
                mp[i] += 1;
                temp /= i;
            }
        }
        if (temp > 0)
        {
            mp[temp] += 1;
        }
    }
    int findValidSplit(vector<int> &nums)
    {

        // make a freq map with primefactor->freq
        unordered_map<int, int> freq;
        // inserting primefactor with freq of all array elements
        for (int i : nums)
        {
            primefreq(i, freq);
        }
        // creating a map to check the prefix part freq
        unordered_map<int, int> pre;
        for (int i = 0; i < nums.size(); i++)
        {
            primefreq(nums[i], pre);
            bool flag = true;
            for (auto i : pre)
            {
                if ((freq[i.first] - i.second) > 0)
                {
                    flag = false; // not possible split
                    break;
                }
            }
            if (flag and i != nums.size() - 1)
                return i;
        }
        return -1;
    }
};