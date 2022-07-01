/**
 * @file LongestRepeatingCharReplacement.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-06-25
 *
 * @copyright Copyright (c) 2022
 *
 */
// Initialise two pointers as left and right to mark the window size
// Make a frequency array of size 26 to store the frequencies of every character in current window size.
// Now traverse the string(expand window) with right pointer.
// I have made findsum function which will give how many characters we can change in current window size.
// If no of characters to be changed is more than k than we shrink window by moving left pointer.
// At the end of each iteration we find the maximum of cur windowsill and ans.
/**
int findsum(vector<int> &v)
{
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < 26; i++)
    {
        maxi = max(maxi, v[i]);
        sum += v[i];
    }
    return sum - maxi;
}
int characterReplacement(string s, int k)
{
    int ans = 0;
    int left = 0;
    vector<int> freq(26, 0);
    for (int right = 0; right < s.size(); right++)
    {
        freq[s[right] - 'A']++;
        int canchange = findsum(freq);
        while (canchange > k)
        {
            freq[s[left] - 'A']--;
            left++;
            canchange = findsum(freq);
        }
        ans = max(ans, right - left + 1);
    }
    return ans;
}
*/