/**
 * @file PallindromePartitioning.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-12-27
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
vector<vector<string>> partition(string s)
{
    // to store the complete ans
    vector<vector<string>> res;
    // to store each vector of the string in the path
    vector<string> path;
    // partition helpter to start at index 0 with s string with path and res
    partitionHelper(0, s, path, res);
    return res;
}

void partitionHelper(int index, string s, vector<string> &path,
                     vector<vector<string>> &res)
{
    // if the index becomes size means ye possibliti ki saari hamne try karliya hai sop ye vector of string ko res me daalso
    if (index == s.size())
    {
        res.push_back(path);
        return;
    }
    // now jo bhi bach gayi hai string usse size tak jaayenge
    for (int i = index; i < s.size(); ++i)
    {
        // hame iss string ko tabhi lenge means 0(startindex jo bhi hai initial ke liye 0) se index tak ki string ko tabhi lenge jab startindex se i tak ki string pallindrome hai toh if yes then simple i+1 ke liye call kardo
        if (isPalindrome(s, index, i))
        {
            path.push_back(s.substr(index, i - index + 1));
            partitionHelper(i + 1, s, path, res);
            // and backtrack karna naa bhule last wale ko hata de simple

            path.pop_back();
        }
    }
}

bool isPalindrome(string s, int start, int end)
{
    while (start <= end)
    {
        if (s[start++] != s[end--])
            return false;
    }
    return true;
}
*/