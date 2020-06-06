#include <stdio.h>
void main(){
    int a=0;
    a=5||2|1;
    printf("%d",a);
}

/*
OPTIONS-
1. 1
2. 7
3. 0
4. 8
Answer & Explanation
Correct Answer - 1
1

Bitwise OR operator has precedence over logical OR operator

Thus the expression 5 || 2 | 1 is actually 5 || (2 |1)

Now

2= 0000 0010

1= 0000 0001

2|1= 0000 0011=3 (refer to bitwise operator)

5 || 3 returns true as both are nonzero

Thus a=1
*/
