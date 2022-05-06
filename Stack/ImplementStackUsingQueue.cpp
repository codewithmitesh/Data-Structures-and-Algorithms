/**
 * @file ImplementStackUsingQueue.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-05
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
MyStack()
{
}
queue<int> q;

void push(int x)
{
    q.push(x);
    for (int i = 0; i < q.size() - 1; ++i)
    {
        q.push(q.front());
        q.pop();
    }
}

int pop()
{
    int e = q.front();
    q.pop();
    return e;
}

int top()
{
    return q.front();
}

bool empty()
{
    return q.empty();
}
*/