/**
 * @file MultiplyTwoNumbersRepAsLL.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-09
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
long long multiplyTwoLists(Node *l1, Node *l2)
{

    long long num1 = 0;
    Node *curr1 = l1;
    while (curr1 != NULL)
    {

        num1 = (num1 * 10 + curr1->data) % 1000000007;
        curr1 = curr1->next;
    }

    long long num2 = 0;

    Node *curr2 = l2;
    while (curr2 != NULL)
    {
        num2 = (num2 * 10 + curr2->data) % 1000000007;
        curr2 = curr2->next;
    }
    return (num1 * num2) % 1000000007;
}*/