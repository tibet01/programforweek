#include<stdio.h>
int gcd(int g, int v)
{
    int f = (g >= v) * g + (v > g) * v, a;
    for (int i = f; i > 0; i--)
    {
        if (g % i == 0 && v % i == 0)
        {
            a = i;
            break;
        }
    }
    return a;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", gcd(x, y));
    return 0;
}
