/**
 * @file ChicksInZoo.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-11-02
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
long long int NoOfChicks(int n)
{

    vector<long long int> dp(n + 1, 0);
    dp[1] = 1;

    long long int total = 1;
    for (int i = 2; i <= n; i++)
    {

        if (i > 6)
        {
            total -= dp[i - 6];
        }

        dp[i] = total * 2;
        total += (total * 2);
    }

    return total;
}
*/