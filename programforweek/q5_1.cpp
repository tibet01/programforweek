#include<stdio.h>
int max(int g, int v)
{
    return (g >= v) * g + (v > g) * v;
}

int main()
{
    int x, y, z, a, b;
    scanf("%d %d %d", &x, &y, &z);
    a = z - y - 1;
    b = y - x - 1;
    printf("%d", max(a, b));
    return 0;
}