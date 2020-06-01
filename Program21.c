#include<stdio.h>
main()
{
    int i;
    for(i=0;i<=5;i++);
    {
        printf("hello : %d",i);
    }

}

//OPTIONS
//   A                      //  B
// hello : 0                //hello : 6
// hello : 1
// hello : 2
// hello : 3                // C
// hello : 4                //COMPILETIME ERROR
// hello : 5

//corect answer- (B) hello : 6
//as we see there is semicolon at the end of for loop and it is completely valid
//the loop will run 6 times and after the execution value of i will be 6
//hence hello : 6 will be printed
