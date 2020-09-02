#include<stdio.h>
#include<string.h>
int main()
{
    int a = 0;
    char w[1000];
    scanf("%s", w);
    printf("..");
    for (int i = 1; i <= strlen(w); i++)
    {
        if (i != strlen(w))
        {
            if (i % 3 != 0) printf("#...");
            else printf("*...");
        }
        else
        {
            if (i % 3 != 0) printf("#..");
            else printf("*..");
        }
    }
    printf("\n.");
    for (int i = 1; i <= strlen(w); i++)
    {
        if (i % 3 != 0) printf("#.#.");
        else printf("*.*.");
    }
    printf("\n");
    for (int i = 1; i <= strlen(w); i++)
    {
        if ((i % 3 == 0 || (i - 1) % 3 == 0) && i >= 3) printf("*.%c.", w[i - 1]);
        else printf("#.%c.", w[i - 1]);
        if (i == strlen(w))
        {
            if (i % 3 == 0) printf("*");
            else printf("#");
        }
    }
    printf("\n.");
    for (int i = 1; i <= strlen(w); i++)
    {
        if (i % 3 != 0) printf("#.#.");
        else printf("*.*.");
    }
    printf("\n..");
    for (int i = 1; i <= strlen(w); i++)
    {
        if (i != strlen(w))
        {
            if (i % 3 != 0) printf("#...");
            else printf("*...");
        }
        else
        {
            if (i % 3 != 0) printf("#..");
            else printf("*..");
        }
    }
    return 0;
}
