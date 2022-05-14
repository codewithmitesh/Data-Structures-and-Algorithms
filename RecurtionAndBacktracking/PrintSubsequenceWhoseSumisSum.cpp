/**
 * @file PrintSubsequenceWhoseSumisSum.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;

void PrintAllSubsequencesSemisSum(vector<int> &arr, int i, vector<int> &temp, int &sum, int &currSum)
{
    // base case
    if (i >= arr.size())
    {
        if (currSum == sum)
        {

            for (auto it : temp)
            {
                cout << it << " ";
            }
            cout << '\n';
        }
        return;
    }

    temp.push_back(arr[i]); // include current i
    currSum += arr[i];
    PrintAllSubsequencesSemisSum(arr, i + 1, temp, sum, currSum);

    temp.pop_back(); // Not include current i
    currSum -= arr[i];
    PrintAllSubsequencesSemisSum(arr, i + 1, temp, sum, currSum);
}
// Print Only First Ans Or Print only one sequence (optimized Recurstion call it will not call further nrecurtions as soon as the first occurance is found)

bool printFirstSeqofsumissum(vector<int> &arr, int i, vector<int> &temp, int &sum, int &currSum)
{ // base case
    if (i >= arr.size())
    {
        if (currSum == sum)
        {
            for (auto it : temp)
            {
                cout << it << " ";
            }
            cout << '\n';
            return true;
        }
        return false;
    }

    temp.push_back(arr[i]); // include current i
    currSum += arr[i];
    if (printFirstSeqofsumissum(arr, i + 1, temp, sum, currSum) == true)
        return true;

    temp.pop_back(); // Not include current i
    currSum -= arr[i];
    if (printFirstSeqofsumissum(arr, i + 1, temp, sum, currSum) == true)
        return true;

    return false;
}

// Function to count the number of Subsequence with sum k

int countSubseqwithsumk(vector<int> &arr, int i, vector<int> &temp, int &sum, int &currSum)
{
    // base case if satisdfied return 1 or return 0;
    if (i >= arr.size())
    {
        if (currSum == sum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    temp.push_back(arr[i]); // include current i
    currSum += arr[i];
    int l = countSubseqwithsumk(arr, i + 1, temp, sum, currSum);

    temp.pop_back(); // Not include current i
    currSum -= arr[i];
    int r = countSubseqwithsumk(arr, i + 1, temp, sum, currSum);

    // at last return total
    return l + r;
}

int main()
{

    vector<int> arr = {1, 2, 1};
    int sum = 2, currSum = 0;
    vector<int> temp;
    PrintAllSubsequencesSemisSum(arr, 0, temp, sum, currSum);
    printFirstSeqofsumissum(arr, 0, temp, sum, currSum);
    cout << countSubseqwithsumk(arr, 0, temp, sum, currSum);

    return 0;
}
