#include<stdio.h>
#include<math.h>
int main()
{
    double a[105][2], n, m = 0, x1, y1, x2, y2, x3, y3, v;
    scanf("%lf", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &a[i][0], &a[i][1]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                x1 = a[i][0];
                y1 = a[i][1];
                x2 = a[j][0];
                y2 = a[j][1];
                x3 = a[k][0];
                y3 = a[k][1];
                v = fabs(x1 * y2 + x2 * y3 + x3 * y1 - y1 * x2 - y2 * x3 - y3 * x1) / 2;
                if (v > m) m = v;
            }
        }
    }
    printf("%.3lf", m);
    return 0;
}
