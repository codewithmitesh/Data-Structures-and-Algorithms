typedef long long ll;

class Solution
{
public:
    long long minimumPossibleSum(int n, int target)
    {
        unordered_set<ll> uns;
        ll k = target;
        ll ans = 0;
        ll i = 1;
        while (n)
        {

            if (uns.find(k - i) == uns.end())
            {
                uns.insert(i);
                ans += i;
                n--;
            }
            i++;
        }
        return ans;
    }
};