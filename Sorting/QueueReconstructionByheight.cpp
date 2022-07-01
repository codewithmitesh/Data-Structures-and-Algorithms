/**
 * @file QueueReconstructionByheight.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-06-30
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
static bool comp(vector<int> &a, vector<int> &b)
{ // Comparator function for the logic of sort
    if (a[0] == b[0])
        return a[1] < b[1];
    return a[0] > b[0];
}
vector<vector<int>> reconstructQueue(vector<vector<int>> &people)
{
    sort(people.begin(), people.end(), comp); // Sorting the array according to comp function.
    vector<vector<int>> ans;                  // to store the final array to be returned
    for (auto man : people)
    {
        ans.insert(ans.begin() + man[1], man); // Inserting the element at desired position.
    }
    return ans;
}
*/