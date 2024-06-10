#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    vector<int> v = {-1, 1, 2, 3, 4};

    vector<vector<int>> mat(30, vector<int>(n, 0));
    // simple 2d mar 1 se bcz 1 base indexing liya hai
    for (int i = 1; i < n; i++)
    {
        int k = v[i];
        // for each element we need to find the binary representation
        // 0 to 32 means right to left hence 32 to 0 karrqa
        for (int j = 0; j < 32; j++)
        {
            int mask = 1 << j;
            if (k & mask != 0)
            {
                mat[j][i] = 1;
            }
        }
    }

    // NOW for each row me hame travrse karke find krna hai
    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        int cnt = 0, sum = 0;

        if (mat[i][1] == 1)
            cnt++;
        for (int j = 2; j < n; j++)
        {
            if (mat[i][j] == 0)
            {
                int totalValidPair = cnt;
                sum += totalValidPair * (1 << i);
            }
            else
            {
                int totalValidPair = j - 1;
                sum += totalValidPair * (1 << i);
                cnt++;
            }
        }
        ans += sum;
    }

    cout << ans << " ";

    return 0;
}