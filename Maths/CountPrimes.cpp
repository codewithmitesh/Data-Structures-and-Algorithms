/**
 * @file CountPrimes.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-12-21
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
 * Seive of Eratosthenes
int countPrimes(int n)
{

    vector<int> arr(n + 1, 1);
    // arr[0]=arr[1]=0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (arr[i] == 1)
        {
            for (int j = i * 2; j <= n; j = j + i)
            {
                arr[j] = 0;
            }
        }
    }
    cout << "Chala";
    int cnt = 0;
    for (int i = 2; i < n; i++)
    {
        if (arr[i])
        {
            cnt++;
        }
    }
    return cnt;
}
*/