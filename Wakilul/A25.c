#include<stdio.h>
int main()
{
    int n1, n2, x , i;
    long long sum = 0;
    printf(" Enter the value of n1 & n2 :  ");
    scanf("%d%d", &n1, &n2);
   if(n1>n2)
   {
       x = n1;
       n1 = n2;
       n2 = x;
   }
   printf("The odd numbers are : \n ");
   for (i = n1; i <= n2; i++)
   {
       if (i % 2 == 1)
       {
           sum = sum + i;
           printf("%d ", i);
       }
    }

    printf(" \n Sum =  %d ", sum);
    return 0;
}