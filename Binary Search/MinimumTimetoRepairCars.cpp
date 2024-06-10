/**
 * @file MinimumTimetoRepairCars.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-22
 *
 * @copyright Copyright (c) 2023
 *
 */
#define ll long long

bool check(ll mid, vector<int> &ranks, int cars)
{
    ll tmp = 0;

    for (int i = 0; i < ranks.size(); i++)
    {
        if (cars > 0)
        {
            tmp = sqrt(mid / ranks[i]);
            cars -= tmp;
        }
    }
    if (cars > 0)
        return false;
    else
        return true;
}

long long repairCars(vector<int> &ranks, int cars)
{

    ll low = 0, high = (ll)cars * (ll)cars * 100 * 1LL;
    ll ans = high;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;

        if (check(mid, ranks, cars))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}