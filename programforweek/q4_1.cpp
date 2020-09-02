#include<stdio.h>
int main()
{
    int a[10], c = 0, sum = 0;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    for (int i = 0; i < 8 && c == 0; i++)
    {
        for (int j = i + 1; j < 9 && c == 0; j++)
        {
            if (sum - a[i] - a[j] == 100)
            {
                a[i] = 0;
                a[j] = 0;
                c = 1;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        if (a[i] != 0)
        {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}
