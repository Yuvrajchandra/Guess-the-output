#include<stdio.h>
main()
{
    int a,b,c;
    c=4;
    a=b=c;      //c=4, b=4, a=4
    c=a==b;     //a==b returns 1
    printf("c:%d",c);
}

//OPTIONS
// A. COMPILETIME ERROR
// B. 4
// C. 1
// D. 8

//correct option- c:1 as priority of == is higher than =
