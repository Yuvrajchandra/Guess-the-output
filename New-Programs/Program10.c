#include <stdio.h>
void main(){
    unsigned char c=290;
    printf("%d",c);
}

/*
OPTIONS:-
1.34
2.290
3.Garbage
4.ERROR

Answer & Explanation
Correct Answer - 1
34

290 is beyond the range of unsigned char.
Its corresponding value printed is: (290 % (UINT_MAX +1) where UINT_MAX represents highest (maximum) value of UNIT type of variable.

Here it's character type and thus UINT_MAX=255

Thus it prints 290 % (UINT_MAX +1)=34
*/
