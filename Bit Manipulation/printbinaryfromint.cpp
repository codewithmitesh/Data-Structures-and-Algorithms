/**
 * @file printbinaryfromint.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-04-06
 *
 * @copyright Copyright (c) 2023
 *
 */
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main()
{

    ll n;
    cin >> n;

    for (int i = 30; i >= 0; i--)
    {
        int mask = n >> i;
        if (mask & 1 == 1)
            cout << "1";
        else
            cout << "0";
    }

    return 0;
}
