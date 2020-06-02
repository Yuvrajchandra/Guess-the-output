#include<stdio.h>
void f(int *p, int *q)
{
    p=q;
    *p=2;
}
int i=0, j=1;
main()
{
    f(&i, &j);
    printf("%d %d", i, j);
}

//OPTIONS
// A. COMPILETIME ERROR
// B. 0 1
// C. 0 2
// D. 2 0




/* 
address     1000        2000        3000        4000
             i            j           p           q
value        0            1         1000        2000

p=q
value of p=2000

*p=2
*(2000)=2   value of j=2
*/
