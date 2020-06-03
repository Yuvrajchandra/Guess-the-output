#include<stdio.h>
main()
{
    char x=120;
    while(++x>10)
    {
        printf("%d\t",x);
    }
}

//output-
//120   121 ...... 127  -128    -127 ...... -1

//this is because range of char is from -128 to 127
//ans after 127 its value will be incremente to -128 and so on .
//the exit condition of loop will be when x=0
//thus it will not be an infinite loop
