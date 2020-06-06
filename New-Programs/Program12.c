What will be the output of following program (on 32 bit compiler)?
#include <stdio.h>
int main(){
    float a=125.50;
    int   b=125.50;
    char  c='A';
 
    printf("%d,%d,%d\n",sizeof(a),sizeof(b),sizeof(125.50));
    printf("%d,%d\n",sizeof(c),sizeof(65));
    return 0;
}
/*
OPTIONS-
1. 4,4,4
   1,4
  
2. 4,4,8
   1,1

3. 4,4,4
   1,1

4. 4,4,8
   1,4
Answer & Explanation
Correct Answer - 4
4,4,8
1,4

sizeof(a)= 4 bytes (float), sizeof(b)=4 bytes(int...in Visual studion, 2 in turboc),
sizeof(125.50)=8 bytes (125.50 will consider as double constant), sizeof(c)= 1 byte (character), sizeof(65) = 4 bytes ( 65 is an integer ).
*/
