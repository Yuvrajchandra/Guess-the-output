#include<stdio.h>
main()
{
int x=20;
x*=30+5;
printf("%d",x);
}

//OPTIONS
// A. COMPILETIME ERROR
// B. 700
// C. 605
// D. 35

//correct answer- 700
// as in the case of assignment operator first RHS of expression will be evaluated
// it will be operated as - 
//x= 20*(30+5);
