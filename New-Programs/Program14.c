#include <stdio.h>
int main()
{
    int ok=-100;
    -100;
    printf("%d",ok);
    return 0;
}

/*
OPTIONS-
100
ERROR
-100
0

Answer & Explanation
Correct Answer: -100

-100 is evaluated and this does not effect the value of ok.
*/
