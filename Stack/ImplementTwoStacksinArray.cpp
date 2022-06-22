/**
 * @file ImplementTwoStacksinArray.cpp
 * @author Mitesh Tank (codewithmitesh)
 *
 * @brief
 * @version 0.1
 * @date 2022-06-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;

// int n = 11;
class TwoStacksinArray
{
    const static int n = 11;
    int arr[11];

    int tp1;
    int tp2;

public:
    TwoStacksinArray()
    {
        tp1 = -1;
        tp2 = n;
        for (int i = 0; i < n; i++)
        {
            arr[i] = 0;
        }
    }
    void push1(int x)
    {
        if (tp2 == tp1 + 1)
        {
            cout << "Stack Overflow Cant Add more data "
                 << '\n';
        }
        tp1++;
        arr[tp1] = x;
    }
    int pop1()
    {
        if (tp1 == -1)
        {
            cout << "Stack Underflow" << '\n';
        }
        int temp = arr[tp1];
        arr[tp1] = 0;
        tp1--;
        return temp;
    }

    int top1()
    {
        return arr[tp1];
    }

    void push2(int x)
    {
        if (tp2 == tp1 + 1)
        {
            cout << "Stack Overflow Cant Add more data "
                 << '\n';
        }
        tp2--;
        arr[tp2] = x;
    }
    int pop2()
    {
        if (tp2 == n)
        {
            cout << "Stack Underflow" << '\n';
        }
        int temp = arr[tp2];
        arr[tp2] = 0;
        tp2++;
        return temp;
    }

    int top2()
    {
        return arr[tp2];
    }
    void printstack()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{

    TwoStacksinArray s1;

    s1.printstack();
    s1.push1(10);
    s1.push1(20);
    s1.push1(30);
    s1.push2(100);
    s1.push2(90);
    cout << '\n';
    s1.printstack();
    cout << '\n';
    cout << s1.top1();
    cout << '\n';
    cout << s1.top2();
    s1.pop1();
    s1.pop2();
    cout << '\n';
    s1.printstack();
    s1.pop2();
    s1.pop2();
    return 0;
}