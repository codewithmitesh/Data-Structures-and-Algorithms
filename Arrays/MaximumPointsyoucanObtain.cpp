/**
 * @file MaximumPointsyoucanObtain.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-06-26
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int maxScore(vector<int> &cardPoints, int k)
{

    int left, total_sum = 0, n = cardPoints.size();
    // calculate the sum of all the elements in the array
    for (auto i : cardPoints)
        total_sum += i;

    int windowSum = 0, right = n - k;

    // if k==N means all elements need to taken then totalSum will be Our Ans
    if (n == k)
        return total_sum;

    // calculate the sum of 1st window
    for (int i = 0; i < right; i++)
    {
        windowSum += cardPoints[i];
    }
    int ans = total_sum - windowSum;
    // start using sliding window
    while (right < n)
    {
        windowSum -= cardPoints[left];
        windowSum += cardPoints[right];

        // calculate the max sum
        ans = max(total_sum - windowSum, ans);
        left++, right++;
    }
    return ans;
}
*/