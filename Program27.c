#include<stdio.h>
main()
{
    int i;
    i= 10 + 010 + 0x20;
    printf("d",i);
}

//OPTIONS
// A. COMPILETIME ERROR
// B. 40
// C. 50
// D. 20



// CORRECT ANSWER-
// 010 is an octal number. 
// Therefore, 010= 1*(8^1) + 0*(8^0)
// 010= 0+8
// 010= 8

// 0x20 is a hexadecimal number
// Therefore, 0x20= 2*(16^1) + 0*(16^0)
// 0x20= 32+0
// 0x20= 32

// i= 10 + 8 + 32= 50
