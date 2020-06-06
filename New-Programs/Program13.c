#include <stdio.h>
int main(){
    static char a;
    static long b;
    int c;
 
    printf("%d,%d,%d",a,b,c);
    return 0;
}

/*
OPTIONS-
1. 0,0,0
2. Garbage,Garbage,Garbage
3. Garbage,Garbage,0
4. 0,0,Gargabe

Answer & Explanation
Correct Answer - 4
0,0,Garbage Value

Static variable always initialize with 0, and other one by garbage value.

N.B: output is compiler dependent
*/
