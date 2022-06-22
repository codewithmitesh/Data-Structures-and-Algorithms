/**
 * @file StokSpanProblem.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-06-20
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
class StockSpanner
{
public:
    stack<pair<int, int>> st;
    int index = 0;
    StockSpanner()
    {
        // here we compulsory need to traverse from left to right hence we will find the next smaller element and initaly will put the INTMAX and 1
        st.push({INT_MAX, -1});
    }
    int next(int price)
    {
        int flag = 0;
        while (st.top().first <= price && st.size() != 1)
        {
            st.pop();
        }
        flag = abs(index - (st.top().second));
        st.push({price, index});
        index++;
        return flag;
    }
};
*/