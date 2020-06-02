#include<stdio.h>
main()
{
    int x=10, y=15;
    if(++x<10 && ++y>15)
    {
        x++;
    }
    else
    {
        y++;
    }

    printf("x:%d y:%d",x,y);
}

//OPTIONS
// A. COMPILETIME ERROR
// B. x:11 y:16
// C. x:12 y:16
// D. x:11 y:17


//correct option- x:11 y:16
//if both the conditions of && is true , it will return true.
//But if any/both of them is false, it will return false.
//in this case first condition is false(++x<10 is false) therefore there is no need to check second condition
//hence ++y>15 will not be evaluated
