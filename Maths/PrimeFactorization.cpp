/**
 * @file PrimeFactorization.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-12-25
 *
 * @copyright Copyright (c) 2022
 *
 */
// Problem :- Smallest Value After Replacing With Sum of Prime Factors
/**
 * @brief
 *
 * @param n
 * @return int
 */
// this it to find the primefactors  of a number
int primeFactors(int n)
{
    int sum = 0;
    // first we will devide numbers by 2 untill it is not devided further by two by doing this we are elemenitating the halft serch space
    while (n % 2 == 0)
    {
        sum += 2;
        // cout << 2 <<" ";
        n = n / 2;
    }
    // now we will devide numbers by 3 to sqrt(n) and will increase the i by i+2 bcz 2 ka muliply means even ko toh aese hi hamne hata diya so..
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            sum += i;
            // cout << i <<" ";
            n = n / i;
        }
    } // here we need to find the sum we are adding all prime factors
    if (n > 2)
        sum += n;
    return sum;
}
// check if number is prime in sqrt n time
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int smallestValue(int n)
{
    // we can reduce a number untill it becomes prime number
    while (!isPrime(n))
    {
        int temp = n;
        n = primeFactors(n);
        // is number remained is prime then return it
        if (n / temp == 1)
            return n;
    }
    return n;
}
* /