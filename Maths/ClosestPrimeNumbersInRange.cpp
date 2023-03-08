/** @author Mitesh Tank (codewithmitesh) :- https://linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh , https://twitter.com/codewithmitesh
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh */

#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace chrono;
// using namespace __gnu_pbds;

// data types
using ll = long long;
using lld = long double;
using ull = unsigned long long;

// definitions
typedef pair<int, int> pii;
typedef pair<char, int> pci;
typedef pair<int, char> pic;
typedef pair<int, string> pis;
typedef pair<string, int> psi;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
typedef vector<vector<pll>> vvpll;
typedef vector<pll> vpll;
typedef vector<pii> vpii;

// constants
const lld pi = 3.141592653589793238462;
const ll K = 1e9 + 7;
const ll INF = 2e18;

// for loop aliases
#define fr(i, n) for (ll i = 0; i < n; i++)
#define rfr(i, n) for (ll i = n; i >= 0; i--)
#define frs(i, s, n) for (ll i = s; i < n; i++)
#define rfrs(i, s, n) for (ll i = s; i >= n; i--)

// more macros
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define setBitsCount __builtin_popcountll
#define codeTooQuick()                \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

// vector sort functions, string sort functions
#define vr(v) v.begin(), v.end() // sort(vr(v));
#define rv(v) v.end(), v.begin()

// sort acc. to pair's first element or sec elements
bool sorti(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
bool sortd(const pair<int, int> &a, const pair<int, int> &b) { return (a.second > b.second); }

// #ifndef ONLINE_JUDGE
// #define debugs(x)               \
//     cerr << #x << " :" << endl; \
//     _print(x);                  \
//     cerr << endl;
// #else
// #define debugs(x)
// #endif

//  operator overload for vectors
template <typename T1, typename T2> // cin >> pair<T1, T2>
istream &operator>>(istream &istream, pair<T1, T2> &p)
{
    return (istream >> p.first >> p.second);
}
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}
template <typename T1, typename T2> // cout << pair<T1, T2>
ostream &operator<<(ostream &ostream, const pair<T1, T2> &p)
{
    return (ostream << p.first << " " << p.second);
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}

// bits conversion
string decToBinary(int n)
{
    string s = "";
    int i = 0;
    while (n > 0)
    {
        s = to_string(n % 2) + s;
        n = n / 2;
        i++;
    }
    return s;
}
ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}

// useful functions
template <typename T>
void print(T &&t) { cout << t << "\n"; }
void printArr(ll arr[], ll n)
{
    fr(i, n) cout << arr[i] << " ";
    cout << "\n";
}
template <typename T>
void printVec(vector<T> v)
{
    ll n = v.size();
    fr(i, n) cout << v[i] << " ";
    cout << "\n";
}
template <typename T>
ll sumVec(vector<T> v)
{
    ll n = v.size();
    ll s = 0;
    fr(i, n) s += v[i];
    return s;
}

// Mathematical functions
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }
bool isPowerOfTwo(ll n)
{
    if (n == 0)
    {
        return false;
    }
    return (ceil(log2(n)) == floor(log2(n)));
}
bool isPerfectSquare(ll x)
{
    if (x >= 0)
    {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n <= 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
// m, n are size
int lcs(int i, string a, int m, int j, string b, int n, vector<vector<int>> &dp)
{
    int s1 = a.size(), s2 = b.size();
    if (i >= m || j >= n)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (a[i] == b[j])
    {
        return dp[i][j] = 1 + lcs(i + 1, a, m, j + 1, b, n, dp);
    }
    else
    {
        return dp[i][j] = max(lcs(i + 1, a, m, j, b, n, dp), lcs(i, a, m, j + 1, b, n, dp));
    }
}
// void solve()
// {
//     ll n;
//     cin >> n;
//     string s;
//     cin >> s;
//     string rev = s;
//     reverse(rev.begin(), rev.end());
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         vector<vector<int>> dp(n, vector<int>(n, -1));
//         ans = max(ans, lcs(0, s, i + 1, 0, rev, n - (i + 1), dp));
//     }
//     cout << ans << endl;
// }

// int main()
// {
//     // #ifndef ONLINE_JUDGE
//     //     freopen("Error.txt", "w", stderr);
//     // #endif

//     codeTooQuick();
//     ll t;
//     cin >> t;

//     // auto started = high_resolution_clock::now();

//     // auto stopped = high_resolution_clock::now();
//     // auto duration = duration_cast<microseconds>(stopped - started);

//     // #ifndef ONLINE_JUDGE
//     //     cerr << "Time: " << duration.count() / 1000 << "ms" << endl;
//     // #endif

//     return 0;
// }
// Leetcode solution :-
class Solution
{
public:
    vector<int> SieveOfEratosthenes(int n)
    {
        // Create a boolean array "prime[0..n]" and initialize
        // all entries it as true. A value in prime[i] will
        // finally be false if i is Not a prime, else true.
        vector<bool> prime(n + 1, true);

        for (int p = 2; p * p <= n; p++)
        {
            // If prime[p] is not changed, then it is a prime
            if (prime[p] == true)
            {
                // Update all multiples of p greater than or
                // equal to the square of it numbers which are
                // multiple of p and are less than p^2 are
                // already been marked.
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }

        // Print all prime numbers
        // for (int p = 2; p <= n; p++)
        //     if (prime[p])
        //         cout << p << " ";
        return prime;
    }
    vector<int> closestPrimes(int left, int right)
    {
        vector<bool> primes = SieveOfEratosthenes(right);
        vector<int> temp;
        for (int i = 0; i < primes.size(); i++)
        {
            if (prime[i])
            {
                temp.push_back(i);
            }
        }
        vector<int> ans = {-1, -1};
        int ansint = INT_MAX;
        for (int i = 1; i < temp.size(); i++)
        {
            if (ansint > temp[i] - temp[i - 1])
            {
                ansint = temp[i] - temp[i - 1];
                ans[0] = temp[i - 1];
                ans[1] = temp[i];
            }
        }
        return ans;
    }
};