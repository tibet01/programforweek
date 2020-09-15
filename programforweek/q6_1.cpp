#include<stdio.h>
int main()
{
    int n, k, v = 0, c = 0, a[1000] = {};
    scanf("%d %d", &n, &k);
    for (int i = 2; i <= n && c == 0; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i; j <= n; j += i)
            {
                if (a[j] == 0)
                {
                    a[j] = 1;
                    v++;
                    if (v == k)
                    {
                        printf("%d", j);
                        c++;
                    }
                }
            }
        }
    }
    return 0;
}
