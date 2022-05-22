#include<stdio.h>
int main()
{
    int i, n;
    long long sum = 0;
    printf("N = ");
    scanf("%d", &n);
    i = 1;
    while(i<n)
    {
       sum = sum + i;
       printf("%d+", i);
       i++;
    }
    printf("%d=%lld", i, sum + i);

    return 0;
}