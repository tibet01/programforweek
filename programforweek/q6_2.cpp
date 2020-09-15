#include<stdio.h>
#include<string.h>
int main()
{
    char w[1000];
    scanf("%[^\n]s", w);
    for (int i = 0; i < strlen(w); i++)
    {
        printf("%c", w[i]);
        if (w[i] == 'a' || w[i] == 'e' || w[i] == 'i' || w[i] == 'o' || w[i] == 'u')
        {
            i += 2;
        }
    }
    return 0;
}
