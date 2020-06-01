#include<stdio.h>
main()
{
    int a,x;
    a=5;
    x=a++;                      
    printf("\n %d %d", x, a);       //x=5, a=6 beacuse 'a' will be first assigned to x and then get incremented 

    a=5;
    x=++a;
    printf("\n %d %d", x, a);       //x=6, a=6 because 'a' will be incremented first and then assigned to x.

    a=5;
    x=a--;
    printf("\n %d %d", x, a);       //x=5, a=4 beacuse 'a' will be first assigned to x and then get decremented 

    a=5;
    x=--a;
    printf("\n %d %d", x, a);       //x=4, a=4 because 'a' will be decremented first and then assigned to x.
}
