#include<stdio.h>
int max(int g, int v)
{
    return (g >= v) * g + (v > g) * v;
}

int main()
{
    int ch, a = 0, b = 0, c = 0, n;
    char w[1000];
    scanf("%d", &n);
    scanf("%s", w);
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 1 && w[i - 1] == 'A')
        {
            a++;
        }
        if (i % 3 == 2 && w[i - 1] == 'B')
        {
            a++;
        }
        if (i % 3 == 0 && w[i - 1] == 'C')
        {
            a++;
        }

        if (i % 4 == 1 && w[i - 1] == 'B')
        {
            b++;
        }
        if (i % 4 == 2 && w[i - 1] == 'A')
        {
            b++;
        }
        if (i % 4 == 3 && w[i - 1] == 'B')
        {
            b++;
        }
        if (i % 4 == 0 && w[i - 1] == 'C')
        {
            b++;
        }

        if (i % 6 == 1 && w[i - 1] == 'C')
        {
            c++;
        }
        if (i % 6 == 2 && w[i - 1] == 'C')
        {
            c++;
        }
        if (i % 6 == 3 && w[i - 1] == 'A')
        {
            c++;
        }
        if (i % 6 == 4 && w[i - 1] == 'A')
        {
            c++;
        }
        if (i % 6 == 5 && w[i - 1] == 'B')
        {
            c++;
        }
        if (i % 6 == 0 && w[i - 1] == 'B')
        {
            c++;
        }
    }
    ch = max(a, max(b, c));
    printf("%d\n", ch);
    if (a == ch)
    {
        printf("Adrian\n");
    }
    if (b == ch)
    {
        printf("Bruno\n");
    }
    if (c == ch)
    {
        printf("Goran");
    }
    return 0;
}
