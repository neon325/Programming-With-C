#include<stdio.h>

int main(){
    int a =10;
    if(a=11) // here is no conditional operator . Assignment operator is used here.
    {
        printf("I am 11\n");  // as result always 1 & it will be printed out.
    }
    else{
        printf("I am not 11\n");
    }
    return 0;
}