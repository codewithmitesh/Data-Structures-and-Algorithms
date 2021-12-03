/**
 * @file FindTripletWithZeroSum.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-03
 *
 * @copyright Copyright (c) 2021
 *
 * Solution :-
FindTripletWithZeroSumbool findTriplets(int arr[], int n)
{
    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++)
    {

        int j = i + 1, k = n - 1;
        while (j < k)
        {

            long long sum = arr[i] * 1ll + arr[j] * 1ll + arr[k] * 1ll;
            if (sum == 0)
            {

                return true;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }

    return false;
}
 */
