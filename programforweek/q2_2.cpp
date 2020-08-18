#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char a[1000][1000];
    long n, m, s = 0;
    scanf("%ld %ld", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &a[i]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < m - 1; j++)
        {
            if (a[i][j] == 50 && a[i + 1][j] == 49 && a[i - 1][j] == 49 && a[i][j - 1] == 49 && a[i][j + 1] == 49)
            {
                s++;
            }
        }
    }
    printf("%ld", s);
    return 0;
}