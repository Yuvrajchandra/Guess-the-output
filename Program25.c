#include<stdio.h>
main()
{
    int a=5,b=3;
    printf("%d", ++(a*b+1));
}

//OPTIONS
// A. COMPILER ERROR
// B. 16
// C. 17
// D. 15


//CORRECT ANSWER-
//A. COMPILER ERROR
// ++(a*b+1)
// ++(15+1)
// ++(16) => 16 = 16 +1    //Which is not allowed
