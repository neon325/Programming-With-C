#include<stdio.h>
int main()
{
    int a, b;
    char ch;
  
    do 
    {
        printf("Enter 2 integers : ");
        scanf("%d%d", &a, &b);
        printf("Sum = %d", a + b);
       printf("\n Again ? : \n");
        scanf(" %c", &ch);
    } while (ch == 'y'|| ch == 'Y');

    printf("Thank you");
    return 0;
}