/**
 * @file MinimumDeletiontoMakeCharterFreqUnique.cpp
 * @author Mitesh Tank (codewithmitesh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-06-28
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int minDeletions(string s)
{
    // creating the vector of 26 size to store the ans
    vector<int> v(26);
    // counting the frequencies
    for (auto i : s)
    {
        v[i - 'a']++;
    }
    // sort the v in decresing order
    sort(v.begin(), v.end(), greater<int>());
    // need to initalize the allowed frequency
    int allowedFrequency = v[0];
    // traversing in v and updating the ans and reducing every frequency to its allowed frequencing bcz we need to maintain all frequency unique and in decreasing order
    int ans = 0;
    for (auto a : v)
    {
        // checking the if given freq is more than allowed if true then reduce it to allowed and update the ans
        if (allowedFrequency < a)
        {
            // but if allowedfreq is <= 0 means we cant have that character at all because all possible unique frequency are taken already so we need to completely remove that character by doing its frequency to 0 and update the ans
            if (allowedFrequency <= 0)
            {
                ans += a;
            }
            else
            {
                ans += (a - allowedFrequency);
            }
        }
        // Now we need to decrease our allowed freq for next iteration so allowedd freq will decrease by one but always reduce by one wont work because a and a+1 are not consequtive then our allowedFreq should be one less than our a (if v is 9 4 2 then for a = 4 to a = 2 alloweFre should be 3 not 8 so we need to do it accordingly)
        allowedFrequency = min(allowedFrequency - 1, a - 1);
    }

    return ans;
}
*/