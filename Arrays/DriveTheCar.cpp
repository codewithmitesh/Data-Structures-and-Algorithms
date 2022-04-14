/**
 * @brief
 * Problem Link :- https://practice.geeksforgeeks.org/problems/drive-the-car2541/1/
 * @param arr
 * @param n
 * @param k
 * @return long long
 */
/**
long long required(long long arr[], long long n, long long k)
{
    long long count = 0;
    for (long long i = 0; i < n; i++)
    {

        if (arr[i] > k)
        {

            count += abs(arr[i] - k);
            k = k + abs(arr[i] - k);
        }
    }
    return count == 0 ? -1 : count;
}
*/