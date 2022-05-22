#include<stdio.h>
int main()
{
    int n, i, x;
    long long sum = 0;
    printf(" How many numbers : ");
    scanf("%d", &n);
    printf("\n Enter %d numbers :  ",n);
    i = 1;
    while(i <= n )
    {
        scanf("%d", &x);
        sum = sum + x;
        i++;
    }
        printf(" Sum = %lld ", sum);
    return 0;
}