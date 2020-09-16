#include<stdio.h>
#include<string.h>
int main()
{
    int a[1000], t, v, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            printf("%d", a[i]);
            v = i;
            break;
        }
    }
    for (int i = 0; i < v; i++)
    {
        printf("0");
    }
    for (int i = v + 1; i < n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
