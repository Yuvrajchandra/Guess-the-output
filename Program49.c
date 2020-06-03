#include<stdio.h>
main()
{
    int x=3,y=3;
    while(--x && --y)
    {
        printf("\n%d %d",x,y);
    }
}

//output-
//2 2
//1 1

//this is because && operator will check both the condition and after 2 iterations value of x and y will become 0
//thus control will go out of loop
