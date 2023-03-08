/**
 * @file ValidSquare.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-06
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    double dist(vector<int> &p1, vector<int> &p2)
    {
        return sqrt((p2[0] - p1[0]) * (p2[0] - p1[0]) + (p2[1] - p1[1]) * (p2[1] - p1[1]));
    }
    bool validSquare(vector<int> &p1, vector<int> &p2, vector<int> &p3, vector<int> &p4)
    {

        vector<vector<int>> pt;
        pt.push_back(p1);
        pt.push_back(p2);
        pt.push_back(p3);
        pt.push_back(p4);
        sort(pt.begin(), pt.end());
        for (int i = 1; i < 4; i++)
        {
            if (pt[i] == pt[i - 1])
                return false;
        }

        double dia2 = dist(pt[1], pt[2]);
        double dia1 = dist(pt[0], pt[3]);
        double s2 = dist(pt[0], pt[1]);
        double s1 = dist(pt[0], pt[2]);

        return s1 == s2 && dia1 == dia2;
    }
};