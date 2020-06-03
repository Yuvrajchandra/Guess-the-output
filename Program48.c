#include<stdio.h>
main()
{
    int i=2, j=2;
    while(i+1?--i:--j)
    {
        printf("%d\n",i);
    }
}

//OPTIONS
// A. COMPILETIME ERROR
// B. 1
// C. 2
// D. 3

//correct option- 1
//this is because i+1 which is true therefore first expression will be executed and i will become 1
//1 will be printed and once again condition will be checked
//since the condition is again true , therefore first expression will be executed and i will become 0
//thus control will go out of loop
