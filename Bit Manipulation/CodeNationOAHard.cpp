#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
ll a[200000 + 5];
// binary 2d array
ll ok[200000 + 5][50];
// prefix sum array
ll sum[200000 + 5][50];
ll k[55];
// two l1 and r1 given
ll kk(ll x, ll y)
{
    // diffrence bte r1 and l1
    ll vv = abs(x - y) + 1;
    ll rr = 0; // and1 jisme ans store hoga
    ll i = 31;
    // travese all 0 to 31 bits
    while (i >= 0)
    {
        // find diffrence of prefix sum
        ll gg = abs(sum[y][i] - sum[x - 1][i]);
        // if equal to diff btw r1 and l1 then add 1 bit
        if (gg == vv)
        { // to add 1 bitor operation
            rr = ((rr) | (k[i]));
        }

        i--;
    }

    // cout<<"\n";
    // cout<<"\n";
    return rr;
}

int main()
{

    ll n;
    cin >> n;
    ll i = 1;
    while (i <= n)
    {
        cin >> a[i];
        i++;
    }

    k[0] = 1;
    i = 1;
    while (i <= 50)
    {
        k[i] = (2 * k[i - 1]); // poewer...of 2....
        i++;
    }

    int j = 1;
    // each ko binary me convert karre hai
    while (j <= n)
    {
        for (int i = 31; i >= 0; i--)
        {
            int k = a[j] >> i;
            if (k & 1)
            {
                // cout << "1";
                ok[j][i] = 1;
            }
            else
            {
                // cout << "0";
            }
        }
        j++;
    }

    j = 1;
    while (j <= n)
    {
        for (int i = 0; i <= 31; i++)
        {
            // calculating prefix sum
            sum[j][i] = sum[j - 1][i] + ok[j][i];
        }
        j++;
    }

    ll q;
    cin >> q;

    i = 1;
    // for each quary
    while (i <= q)
    {
        ll l1, r1, l2, r2;
        cin >> l1 >> r1;
        cin >> l2 >> r2;
        // cout<<l1;cout<<"\n";
        ll v2 = kk(l1, r1);
        ll v5 = kk(l2, r2);

        // cout<<v2<<" "<<v5 ;
        // final dono and ke answers ka xor karna hai
        ll rr = ((v2) ^ (v5));
        cout << rr;
        i++;
    }
