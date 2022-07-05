/**
 * @file MaximumAreofPeiceofCake.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-02
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int maxArea(int h, int w, vector<int> &horizontalCuts, vector<int> &verticalCuts)
{

    int mod = 1000000007;
    sort(horizontalCuts.begin(), horizontalCuts.end());
    sort(verticalCuts.begin(), verticalCuts.end());
    int vMax = verticalCuts[0], hMax = horizontalCuts[0];
    for (int i = 1; i < verticalCuts.size(); i++)
    {
        vMax = max(vMax, verticalCuts[i] - verticalCuts[i - 1]);
    }
    for (int i = 1; i < horizontalCuts.size(); i++)
    {
        hMax = max(hMax, horizontalCuts[i] - horizontalCuts[i - 1]);
    }
    vMax = max(vMax, w - verticalCuts[verticalCuts.size() - 1]) % mod;
    hMax = max(hMax, h - horizontalCuts[horizontalCuts.size() - 1]) % mod;

    return (1LL * vMax % mod * hMax % mod) % mod;
}
*/