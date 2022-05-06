/**
 * @file FractioinalKnapsack.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-04-27
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
static bool myCom(Item a, Item b)
{
    double ratio1 = ((double)a.value / a.weight);
    double ratio2 = ((double)b.value / b.weight);
    return ratio1 > ratio2;
}

public:
// Function to get the maximum total value in the knapsack.
double fractionalKnapsack(int W, Item arr[], int n)
{
    sort(arr, arr + n, myCom);
    double res = 0;
    int currCapacity = W;
    for (int i = 0; i < n; i++)
    {
        if (currCapacity >= arr[i].weight)
        {
            currCapacity -= arr[i].weight;
            res += arr[i].value;
        }
        else
        {
            res += ((double)currCapacity / arr[i].weight) * arr[i].value;
            return res;
        }
    }
    return res;
}
*/