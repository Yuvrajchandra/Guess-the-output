#include<stdio.h>
main()
{
    int x;
    x=printf("hello%d\n",100); //hello100\n
    printf("%d",x);
}
/*output-
  hello100
  9*/

  //this is beacuse first printf() will return 9 i.e. total no of characters.
  // \n will be aslo treated as 1 character
