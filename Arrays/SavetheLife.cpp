/**
 * @file SavetheLife.cpp
 * @author Mitesh tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-10-13
 *
 * @copyright Copyright (c) 2022
 *
 */
/**1
string maxSum(string w, char x[], int b[], int n)
{
    // code here

    // first create an unordered map to store the new ASCII
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[x[i]] = b[i];
    }

    // now kadanes algo :- maximum contigues sum
    //   maintain currmax and maxtillnow
    //   if currmax<0 then reset currmax = 0
    int currmax = 0, maxtillnow = INT_MIN, startIndex = 0;
    string ans = "";

    for (int i = 0; i < w.length(); i++)
    {

        int val = mp.find(w[i]) != mp.end() ? mp[w[i]] : (int)w[i];
        currmax += val;
        if (currmax > maxtillnow)
        {
            maxtillnow = currmax;
            ans = w.substr(startIndex, i - startIndex + 1);
        }
        if (currmax < 0)
        {
            currmax = 0;
            startIndex = i + 1;
        }
    }
    return ans;
}
*/