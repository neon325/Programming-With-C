#include<stdio.h>
int main()
{
    int i, n;
    long long sum = 0;
    printf("N = ");
    scanf("%d", &n);
    if(n%2==1)
    {
        n = n - 1;
    }
    i = 2;
    while ( i < n )
    {
       sum = sum + i;
       printf("%d+", i);
       i = i + 2;
    }
    printf("%d=%lld", i, sum + i);

    return 0;
}