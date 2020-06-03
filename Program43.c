#include<stdio.h>
main()
{
    int a=1,b=2,c=3,d=4;
    int x;
    x=a=b=c=d;
    printf("%d",b);
}

//OPTIONS
// A. COMPILETIME ERROR
// B. 2
// C. 4
// D. 3


//this is because assignment will be from right to left
