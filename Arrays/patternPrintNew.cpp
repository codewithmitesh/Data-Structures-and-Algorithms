/* C++ program for diamond pattern printing using numbers and stars */

#include <iostream>

using namespace std;

int main()

{
    int i, j, count = 1, n;
    cout << "Enter a number";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j < i)
                cout << count++ << "*";
            else
                cout << count++;
        }
        cout << endl;
    }
    count = count - n;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (j < i)
                cout << count++ << "*";
            else
                cout << count++;
        }
        count = (count + 1) - 2 * i;
        cout << endl;
    }

    return 0;
}