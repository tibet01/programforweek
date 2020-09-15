#include<stdio.h>
int main()
{
    int d, m, a[12] = { 0,3,3,6,1,4,6,2,5,0,3,5 };
    char w[8][100] = { "Sunday","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    scanf("%d %d", &d, &m);
    printf("%s", w[((d + a[m - 1]) % 7 + 3) % 7]);
    return 0;
}
