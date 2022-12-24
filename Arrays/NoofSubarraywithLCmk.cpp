/**
 * @file NoofSubarraywithLCmk.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-11-13
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int subarrayLCM(vector<int> &nums, int k)
{
    // Calculate all subarrays

    int res = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int currLcm = 1;
        for (int j = i; j < n; j++)
        {
            // Calculate required sum
            currLcm = lcm(currLcm, nums[j]);
            // Check if sum is equal to required sum
            if (currLcm == k)
                res++;
        }
    }

    return res;
}
*/