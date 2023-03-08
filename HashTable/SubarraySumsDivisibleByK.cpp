/**
 * @file SubarraySumsDivisibleByK.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-20
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    int subarraysDivByK(vector<int> &A, int K)
    {
        int n = A.size();
        if (n == 0)
            return 0;

        int i = 0, count = 0;
        int curr_sum = 0;
        unordered_map<int, int> mp;
        mp[0] = 1; // this is done because initial cumulative sum = 0 and that sum%k will be equal to 0 always

        while (i < n)
        {
            curr_sum += A[i++];
            int rem = curr_sum % K;
            if (rem < 0)
                rem += K;

            if (mp.find(rem) != mp.end())
                count += mp[rem];

            mp[rem]++;
        }
        return count;
    }
};