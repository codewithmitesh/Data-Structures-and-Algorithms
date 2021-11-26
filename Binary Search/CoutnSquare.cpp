/**
 * @file CoutnSquare.cpp
 * @author codewithmitesh (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * Probelms Link :- 

Solution:-

int countSquares(int N)
{
    int i = 1, count = 0;
    while (i * i < N)
    {
        count++;

        i++;
    }
    return count;
}
 */
