/**
 * @file GenerateUniformRandomInCircle.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-28
 *
 * @copyright Copyright (c) 2023
 *
 */
class Solution
{
public:
    double x1, y1, r;
    Solution(double radius, double x_center, double y_center)
    {
        x1 = x_center;
        y1 = y_center;
        r = radius;
    }

    vector<double> randPoint()
    {
        double r1 = sqrt((double)rand() / RAND_MAX) * r;
        double ang1 = 2 * M_PI * rand() / RAND_MAX;
        double x = x1 + r1 * cos(ang1);
        double y = y1 + r1 * sin(ang1);
        return vector<double>{x, y};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */