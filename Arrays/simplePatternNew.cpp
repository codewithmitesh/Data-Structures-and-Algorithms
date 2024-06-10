#include <stdio.h>

int main()

{
    int arr[100], n, i, j, count = 1, num = 0;
    // scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (j = 1; j <= n; j++)
            {
                printf("%d", count);
                if (j != n)
                    printf("*");
                count++;
            }
            printf("\n");
        }
        else
        {
            for (j = 1; j <= n; j++)
            {
                arr[num] = count;
                count++;
                num++;
            }
        }
    }
    for (i = 1; i <= n / 2; i++)
    {
        int num2 = 0;
        num2 = num - (i * n);
        for (j = 1; j <= n; j++)
        {
            printf("%d", arr[num2++]);
            if (j != n)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
