#include<stdio.h>
main()
{
    int i=10;
    i= !i>14;
    printf("%d", i);
}

//OPTIONS
// A. COMPILETIME ERROR
// B. 0
// C. 1
// D. 10

//CORRECT ANSWER- 0
// as the priority of ! is greater than > therefore-
// !i>14
// !10>14           // ! of any number (except 0) will be 0 also !0=1
// 0>14
// 0 , thus i=0
