/**
 * @file RevereseABit.cpp
 * @author Mitesh Tank(codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-12-21
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
uint32_t reverseBits(uint32_t n)
{

    uint32_t ans = 0;

    // 1101
    // 0001
    // 1011
    for (int i = 0; i < 32; i++)
    {

        ans = (ans << 1 | n & 1);

        n = n >> 1;
    }
    return ans;
}
*/