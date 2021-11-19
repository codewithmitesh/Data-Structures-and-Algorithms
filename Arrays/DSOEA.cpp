//Name:- TANK MITESH RAJESHBHAI
//PRN: 0120200072
// SEAT No:- S218006

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; //n*m Matrix
    cin >> n >> m;
    char strGrid[n + 1][m + 1]; //Creating Matrix of Size
    //taking input of Matrix
    for (int i = 0; i < n; i++)
        cin >> strGrid[i];
    int ans = 0;
    //Traversing through each element and finding the saba String
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (strGrid[i][j] == 's')
            {
                // Here We are Checking the string in Horizontal Directions
                if (j + 3 < m)
                {
                    if (strGrid[i][j] == 's' && strGrid[i][j + 1] == 'a' && strGrid[i][j + 2] == 'b' && strGrid[i][j + 3] == 'a')
                        ans++;
                }
                // Here We are Checking the string in Vertical Directions
                if (i + 3 < n)
                {
                    if (strGrid[i][j] == 's' && strGrid[i + 1][j] == 'a' && strGrid[i + 2][j] == 'b' && strGrid[i + 3][j] == 'a')
                        ans++;
                }
            }
        }
    }
    // printing of ans
    cout << "Ans is :- " << ans;
    return 0;
}
//Output:-
// 4  4
// saba
// asad
// btie
// abit
// 2