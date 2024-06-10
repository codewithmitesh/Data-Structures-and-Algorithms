/**
 * @file MinimumOperationstointtozero.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-04-06
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <bits/stdc++.h>
using namespace std;
int minOperations(int n)
{
    bitset<20> bits(n); // converts num into binary
    // 39 -> 11100100000000000.. In Reverse Order
    cout << bits << "\n";
    int ans = 0, cnt = 1;
    for (int i = 0; i < 20; i++)
    {
        if (bits[i] == 1)
        {
            if (i + 1 < 20 && bits[i + 1] == 1)
            {
                while (i + 1 < 20 && bits[i + 1] == 1)
                    i++;
                bits[i + 1] = 1;
                ans++;
            }
            else
                ans++;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << minOperations(n);
    return 0;
}