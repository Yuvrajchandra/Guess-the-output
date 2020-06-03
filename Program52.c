#include<stdio.h>
main()
{
    int a=5;
    a= ++a   +  ++a;
           
    printf("a: %d", a);
}

//OPTIONS
// A. COMPILETIME ERROR
// B. a: 13
// C. a: 12
// D. a: 14



//correct option- a:14
//this is because in case of pre-increment operators first we will increment all the variables then we will perform any other operations

