#include<stdio.h>
main()
{
    int _=1;
    int __=2;
    int ___= _ + __;
    printf("%d %d %d",_,__,___);
}

//OPTIONS
// A. COMPILETIME ERROR
// B. 1 2 3
// C. 3 2 1
// D. 1 1 1

//CORRECT OPTION-B. 1 2 3
// USING UNDERSCORE(_) AS A VARIABLE NAME IS COMPLETELY VALID
