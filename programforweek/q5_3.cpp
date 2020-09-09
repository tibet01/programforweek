#include<stdio.h>
int max(int g, int v)
{
    return (g >= v) * g + (v > g) * v;
}

int main()
{
    int a[5], t;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("%d", a[0] * a[2]);
    return 0;
}
