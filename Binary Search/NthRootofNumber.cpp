#include <bits/stdc++.h>
using namespace std;

double calculate(double mid, int k)
{
    double res = 1.0;
    for (int i = 1; i <= k; i++)
    {
        res *= mid;
    }
    return res;
}

double nth_rootof_number(int N, int k)
{

    double low = 1, high = N;
    double eps = 1e-6;

    while ((high - low) > eps)
    {
        double mid = (high + low) / 2.0;
        if (calculate(mid, k) > N)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    return low; //or return high;
}

int main()
{
    long long N;
    long long k;
    cin >> N >> k;
    double ans = nth_rootof_number(N, k);
    cout << ans;
    return 0;
}
