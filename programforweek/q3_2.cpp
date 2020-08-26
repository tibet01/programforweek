#include<stdio.h>
#include<string.h>
int main()
{
    int a = 1;
    char w[55];
    scanf("%s", w);
    for (int i = 0; i < strlen(w); i++)
    {
        switch (w[i])
        {
        case 'A':
        {
            if (a == 1) a = 2;
            else if (a == 2) a = 1;
            else if (a == 3) a = 3;
        }
        break;
        case 'B':
        {
            if (a == 1) a = 1;
            else if (a == 2) a = 3;
            else if (a == 3) a = 2;
        }
        break;
        case 'C':
        {
            if (a == 1) a = 3;
            else if (a == 2) a = 2;
            else if (a == 3) a = 1;
        }
        break;
        }
    }
    printf("%d", a);
    return 0;
}
