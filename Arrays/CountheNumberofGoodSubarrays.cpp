/**
 * @file CountheNumberofGoodSubarrays.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-17
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    long long countGood(vector<int> &nums, int k)
    {

        long long ans = 0;
        int n = nums.size();

        int i = 0, j = 0; // pointers
        unordered_map<int, int> ump;
        int cnt = 0; // count of pairs
        // increase the window size untill it becomes valid
        while (j < n)
        {
            // increse the fre of jth front pointer
            ump[nums[j]]++;
            // if the pair is there increase count of pairs also add
            if (ump[nums[j]] > 1)
                cnt += ump[nums[j]] - 1;
            // now try to reduce the window siuze if possible means if cnt>=k
            while (i <= j && cnt >= k)
            {
                // first we add into the ans
                ans += n - j;
                // reduce the freq and reduce cnt if possible
                ump[nums[i]]--;
                // now if the cnt becomes less then reduce further
                if (ump[nums[i]] >= 1)
                    cnt -= ump[nums[i]];
                i++;
            }
            j++;
        }
        return ans;
    }
};