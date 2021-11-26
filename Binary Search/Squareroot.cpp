/**
 * @file Squareroot.cpp
 * @author codewithmitesh (codewithmitesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-25
 * 
 * @copyright Copyright (c) 2021
 * Problem link : - 
  Solution:-
  
long long int floorSqrt(long long int x)
{

    long long low = 1, high = x;
    while ((high - low) > 1)
    {
        long long mid = (low + high) / 2;
        if ((mid * mid) > x)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }

    return low;
}

 
 
 */
