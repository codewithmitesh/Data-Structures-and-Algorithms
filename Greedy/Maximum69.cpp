
/**
 * @brief
 * Mitesg tank
 * @param num
 * @return int
 */
/**
int maximum69Number(int num)
{

    int rightDigCount = -1;
    int digCount = 0;
    int temp = num;
    while (temp > 0)
    {
        int dig = temp % 10;
        if (dig == 6)
            rightDigCount = digCount;
        digCount++;
        temp = temp / 10;
    }
    if (rightDigCount == -1)
        return num;
    int ans = num + (3 * pow(10, rightDigCount));
    return ans;
}
*/