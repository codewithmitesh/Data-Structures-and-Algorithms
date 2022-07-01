/**
 * @file MaximumUnitsOnTruck.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-01
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
static int comp(vector<int> &a, vector<int> &b)
{

    return a[1] > b[1];
}

int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
{

    int n = boxTypes.size(), res = 0;
    int k = truckSize, currBatch;

    sort(boxTypes.begin(), boxTypes.end(), comp);

    for (auto &box : boxTypes)
    {
        currBatch = min(box[0], truckSize);
        truckSize -= currBatch;
        res += currBatch * box[1];
        if (!truckSize)
            break;
    }

    return res;
}
*/