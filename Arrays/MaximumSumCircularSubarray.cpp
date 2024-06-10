class Solution
{
public:
    int maxSubarraySumCircular(vector<int> &nums)
    {

        // will use the kadanes algo to use both max sum and min sum
        int currmax = 0, maxTill = INT_MIN, currmin = 0, minTill = INT_MAX;
        int totalSum = 0;
        for (auto i : nums)
        {
            // create new subarray or continue the subarray
            currmax = max(i, currmax + i);
            // update the max till to get an ans
            maxTill = max(maxTill, currmax);
            // same thing but for minimum sum here
            currmin = min(i, currmin + i);
            minTill = min(minTill, currmin);
            totalSum += i;
        }
        if (maxTill > 0)
        {
            return max(maxTill, totalSum - minTill);
        }
        else
        {
            return maxTill;
        }
    }
};