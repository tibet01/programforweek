#include<stdio.h>
#include<math.h>
int max(int g, int v)
{
    return (g >= v) * g + (v > g) * v;
}

int min(int g, int v)
{
    return (g >= v) * v + (v > g) * g;
}

int main()
{
    int a, b, c, x, y, z, sum;
    char w[5];
    scanf("%d %d %d", &a, &b, &c);
    scanf("%s", w);
    sum = a + b + c;
    x = min(a, min(b, c));
    z = max(a, max(b, c));
    y = sum - x - z;
    for (int i = 0; i < 3; i++)
    {
        switch (w[i])
        {
        case 'A': printf("%d ", x);
            break;
        case 'B': printf("%d ", y);
            break;
        case 'C': printf("%d ", z);
            break;
        }
    }


    return 0;
}
