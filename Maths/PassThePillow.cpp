/**

*/
// how to write a pallindrome check in c++?

class Solution
{
public:
    int passThePillow(int n, int t)
    {

        if (t < n)
            return t + 1;

        int tmp = t / (n - 1);

        if (tmp % 2 == 0)
        {
            return t - (n - 1) * tmp + 1;
        }
        return n - (t - (n - 1) * tmp);
    }
};

// how to check if string is palindrome or not?
// how to center a div?
// how to center a div?