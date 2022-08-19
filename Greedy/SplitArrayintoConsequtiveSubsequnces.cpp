/**
 * @file SplitArrayintoConsequtiveSubsequnces.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-08-19
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool isPossible(vector<int> &nums)
{

    // creating two map one is for  freq and another is to store the virtual subsequences last element
    map<int, int> freq, lastElems;

    // fill the freq map
    for (int i : nums)
        freq[i]++;

    // now we traverse in the array and try to make 3 sized virtual subseqneces and store the last elements of then into lastElems
    for (auto i : nums)
    {

        // if any elements freq is already 0 means it is completly taken into any subsequence so continue
        if (freq[i] == 0)
            continue;

        // taking the current element in any existing subseqnce or creating new we reduce its freq

        freq[i]--;

        // now before creating new triplet subsequence it is possible that there is no 3 elements exists so to handle that we need to put curr element into existing subsequence so we have to check if there is any subsequnce which is ending with just smaller element than curr element than put curr into that subsequnce

        //
        if (lastElems[i - 1] > 0)
        {
            // so just smaller eles freq decrease by one because it is no longer last elem of that subsequnce
            lastElems[i - 1]--;
            // now our current element becomes last element of that subsequence
            lastElems[i]++;
        } // else if create new triplet if possible
        else if (freq[i + 1] != 0 && freq[i + 2] != 0)
        {
            // now create new virtual subseqnce with curr and next two element
            freq[i + 1]--;
            freq[i + 2]--;
            // now curr+2 becomes new last elemnt of the subsequence hence update it in lastElems map
            lastElems[i + 2]++;
        } // for every other case return false
        else
        {
            return false;
        }
    }
    return true;
}
*/