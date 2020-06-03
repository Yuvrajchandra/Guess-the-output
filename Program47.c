#include<stdio.h>
main()
{
    int x;
    x= printf("%d%d%d", printf("hai"),printf("hello"),printf("namaste"));  //x=printf("357") //x=3
    printf("%d",x);
}

//output-
//namastehellohai3573
//this is because 3,5,7 will be returned by printf("hai"),printf("hello"),printf("namaste") respectively
