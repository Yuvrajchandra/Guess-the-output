#include<stdio.h>
main()
{
    int x=10, y=15;
    if(++x>10 || ++y>15)
    {
        x++;
    }
    else
    {
        y++;
    }
    printf("x:%d y:%d", x, y);

}

//OPTIONS
// A. COMPILETIME ERROR
// B. x:12 y:16
// C. x:10 y:16
// D. x:12 y:15



//correct answer- x:12 y:15
//for || operations if the LHS of OR operator is true , control doesn't go to the RHS of it.
//if the first condition is already true there is no need to check the second condition
