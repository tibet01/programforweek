#include<stdio.h>
#include<string.h>
int main()
{
    int a[15], c[50] = {}, n = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        c[a[i] % 42] += 1;
    }
    for (int i = 0; i < 42; i++)
    {
        if (c[i] > 0)
        {
            n++;
        }
    }
    printf("%d", n);
    return 0;
}
