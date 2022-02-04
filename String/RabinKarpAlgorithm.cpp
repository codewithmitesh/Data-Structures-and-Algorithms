/**
 * @file RabinKarpAlgorithm.cpp
 * @author Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,  https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh
 * @brief
 * @version 0.1
 * @date 2021-12-07
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <bits/stdc++.h>
using namespace std;
#define d 256
const int q = 101;
// O((n*m+1)*m) on average does better than Naive AS(O(1))
void RabinKarpAlgorithm(string &text, string &pattern)
{

    int n = text.length();
    int m = pattern.length();

    // Calculate the d^m-1 % q;
    int h = 1;
    for (int i = 1; i <= m-1; i++)
    {
        h = (h * d) % q;
    }

    // Compute the HashValue for Pattern And First window
    int p = 0;
    int t = 0;
    for (int i = 0; i < m; i++)
    {
        p = (p * d + pattern[i]) % q;
        t = (t * d + text[i]) % q;
    }

    // to check if hash value of cuurent window is equal to pattern's hash value if it is then will do naive search to that window only to confirm and if it is not then we will compute the hasvalue of next window using hash value of current window

    for (int i = 0; i <= (n - m); i++)
    {

        if (p == t)
        {

            bool flag = true;
            for (int j = 0; j < m; j++)
            {
                if (text[i + j] != pattern[j])
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {
                cout << i << " ";
            }
        }

        // to compute the hashvalue of next window using hash value of previous
        if (i < (n - m))
        {
            t = (d*(t - text[i] * h) + text[i + m]) % q;
            if (t < 0)
                t = t + q;
        }
    }
}

int main()
{

    cout << "Enter the Text String :- \n";
    string Text;
    cin >> Text;

    cout << "Enter the Pattern String:- \n";
    string Pattern;
    cin >> Pattern;

    cout << "Searching :---------------------------\n";
    RabinKarpAlgorithm(Text, Pattern);

    return 0;
}