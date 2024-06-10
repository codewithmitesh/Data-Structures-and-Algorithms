#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    queue<int> q1;
    queue<int> q2;
    MyStack()
    {
    }

    void push(int x)
    {
        if (q1.empty() && q2.empty())
        {
            q1.push(x);
        }
        else if (q1.empty())
        {
            q1.push(x);
            while (!q2.empty())
            {
                q1.push(q2.front());
                q2.pop();
            }
        }
        else
        {
            q2.push(x);
            while (!q1.empty())
            {
                q2.push(q1.front());
                q1.pop();
            }
        }
    }

    int pop()
    {

        if (q1.empty())
        {
            int temp = q2.front();
            q2.pop();
            return temp;
        }
        else
        {
            int temp1 = q1.front();
            q1.pop();
            return temp1;
        }
        return 0;
    }

    int top()
    {
        if (q1.empty())
        {
            return q2.front();
        }
        else
        {
            return q1.front();
        }
        return 0;
    }

    bool empty()
    {
        return (q1.size() == 0 && q2.size() == 0) ? true : false;
    }
    void printStack()
    {
        if (q1.empty())
        {
            while (!q2.empty())
            {
                cout << q2.front() << " ";
                q2.pop();
            }
        }
        else
        {
            while (!q1.empty())
            {
                cout << q1.front() << " ";
                q1.pop();
            }
        }
    }
};

// Using only One Queue
class MyStack2
{
public:
    queue<int> q;
    MyStack2()
    {
    }
    // in push operation we rotate the whole queue so that all elements which are before the curr elements come after it
    void push(int x)
    {
        q.push(x);
        int n = q.size() - 1;
        int i = 0;
        while (i < n)
        {
            q.push(q.front());
            i++;
            q.pop();
        }
    }

    int pop()
    {
        int temp = q.front();
        q.pop();
        return temp;
    }

    int top()
    {
        return q.front();
    }

    bool empty()
    {
        return q.size() == 0;
    }
    void printStack()
    {
        while (!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }
    }
};

int main()
{

    // MyStack s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // cout << s.pop() << "\n";
    // cout << s.pop() << "\n";
    // cout << s.top() << "\n";
    // cout << s.empty() << "\n";
    // s.printStack();

    MyStack2 s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << s.pop() << "\n";
    cout << s.pop() << "\n";
    cout << s.top() << "\n";
    cout << s.empty() << "\n";
    s.printStack();

    return 0;
}
