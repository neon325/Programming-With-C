//Multiphication of two matrix
#include<stdio.h>
#include<math.h>
#include<time.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
    int A[10][10], B[10][10], M[10][10];
    int arow, brow, acol, bcol;
    int c, d, k, sum = 0;
    printf("Enter the rows & Columns Of A  :  \n");
    scanf("%d%d", &arow, &acol);

    printf("Enter the elements of first matrix\n"); 

    for (c = 0; c < arow; c++)
   {     for (d = 0; d < acol; d++)
          { scanf("%d", &A[c][d]); }
   }
    printf("Enter the rows & Columns Of B  :  \n");
    scanf("%d%d", &brow, &bcol);

     if(acol != brow )
    printf("Matrices with entered orders can't be multiplied with each other.\n ");

    else

       printf("Enter the elements of B matrix\n"); 

    for (c = 0; c < brow; c++)
   {     for (d = 0; d < bcol; d++)
          { scanf("%d", &B[c][d]); }
   }

   for (c = 0; c < arow; c++)
   {
       for (d = 0; d < bcol; d++)
       {
           for (k = 0; k < brow; k++)
           {
               sum = sum + A[c][k] * B[k][d];
           }
           M[c][d] = sum;
           sum = 0;
       }
   }
   
    printf("Product of entered matrices:-\n");

    for (c = 0; c < arow; c++)
    {
        for (d = 0; d < bcol; d++)
        {
            printf("%d\t", M[c][d]);
        }
        printf("\n");
    }

        getch();
    return 0;
}