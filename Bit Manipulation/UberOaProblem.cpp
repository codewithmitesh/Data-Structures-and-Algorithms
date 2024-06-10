/**
 * @file UberOaProblem.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-04-12
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{

    ll n;
    cin >> n;
    vector<ll> ip;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ip.push_back(x);
    }

    // will store the MSB & the frquency...

    //            MSB  freq.
    unordered_map<int, int> mp1;

    ll cnt = 0; // ans which we return
    for (int i = 0; i < n; i++)
    {
        // int msb=mp2[ip[i]];
        // now fig. out the msb of this no.
        int num = ip[i];
        // finding the msb of each no.
        int msb = 0;
        int j = 0;
        // finding the while converting into binayry wlas
        for (int j = 0; j <= 31; j++)
        {
            int mask = 1 << j;
            int val = num & mask;
            // if we got 1 then this position (j) can be our MSB so update
            if (val != 0)
                msb = j;
        }
        // now we have the msb of this no. so we will store it in the map
        mp1[msb]++;
        // now tranver the map or traverse the 0 to 31 to find the number of MBSs which are not equal to crrent msb and in the map means till now added
        for (int j = 0; j <= 31; j++)
        {
            // these are the bit pos. & we have to check whether at this bit pos. any msbs are there or not.
            if (mp1.find(j) != mp1.end() && j != msb)
            {
                cnt += mp1[j];
            }
        }
    }
    cout << cnt << endl;
    return 0;
}