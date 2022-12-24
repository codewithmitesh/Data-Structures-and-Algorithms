/**
 * @file MinimumAverageDiffrence.cpp
 * @author Mitesh T (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-12-04
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int minimumAverageDifference(vector<int> &nums)
{
    // simple prefix sum method se hoga
    long long n = nums.size(), sum = 0, total = accumulate(begin(nums), end(nums), 0l);
    long long maxi = LLONG_MAX, res = 0;
    for (long long i = 0; i < n - 1; i++)
    {
        sum += nums[i];
        long long curr = abs(sum / (i + 1) - (total - sum) / (n - i - 1));
        if (curr < maxi)
            maxi = curr, res = i;
    }
    // last element ka edge case handle karna pagega simply!!!
    return maxi > total / n ? n - 1 : res;
}
*/