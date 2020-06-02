#include<stdio.h>
main()
{
    int x=2;
    printf("%d %d %d", x*x, ++x , x++);
}

//OPTIONS
// A. 9 3 2
// B. 4 3 3
// C. 4 5 5
// D. 16 4 2

//correct option- D. 16 4 2
//because the printf() function will be evaluated from right
//x++ 2, x=3
//++x 4, x=4
//x*x 16
