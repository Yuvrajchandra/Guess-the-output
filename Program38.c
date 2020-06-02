//how many times 'hello' gets printed 

#include<stdio.h>
main()
{
    int a=10,b=20;

    do
    {
        printf("hello\n");
    }
    while(a>b);
    printf("hi");
}

//OPTIONS
// A. COMPILETIME ERROR
// B. 1
// C. 0 
// D. infinite

//correct answer: 1
//do while is a post execution loop
//first the body will run 1 time then the condition will be checked
