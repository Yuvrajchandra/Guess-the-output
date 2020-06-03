#include<stdio.h>
main()
{
    int x,y,z,a;
    y=2;
    if(x=y%2)       //x=2%2=0
    z=2;
    a=2;
    printf("%d %d %d",z,x,a);
}

//value of x will be 0
//therefore if expression will not be executed
//thus z will have garbage value
//value of a will be 2
