#include <stdio.h>
#include<string.h>
char a[100][100], b[100][100][1000];
int main()
{
    int n, c;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %s", &a[i]);
        for (int j = 0; j < strlen(a[i]); j++)
        {
            scanf(" %s", &b[i][j]);
        }

    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", a[i]);
        for (int j = 0; j < strlen(a[i]); j++)
        {
            printf("%s", b[i][j]);
            if (j != strlen(a[i]) - 1)
            {
                printf("-");
            }

        }
        printf("\n");
    }
    return 0;
}
