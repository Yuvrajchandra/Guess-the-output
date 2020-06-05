#include <stdio.h>
void main()
{
    printf("includehelp.com\rOK\n");
    printf("includehelp.com\b\b\bOk\n");
}



//Options

//1. OK
//   includehelp.ok

//2. OK
//   includehelp.okm

//3. includehelp.com
//   includehelp.okm

//4. OKcludehelp.com
//   includehelp.okm







/*Answer & Explanation
Correct Answer - 4
OKcludehelp.com
includehelp.Okm

/r is an escape sequence which means carriage return. Carriage return takes back the cursor to the leftmost side in a line.

Thus in the statement printf("includehelp.com\rOK\n");

First "includehelp" is printed ( not still displayed) then cursor moves to leftmost position ("i" here) and starts printing "OK" which results in overwriting of first two characters of "includehelp". Thus the final output is "OKcludehelp.com" and then cursor moves to next line due to character feed \n.

In the second statement /b escape character is used which is equivalent to backspacing the cursor. 
Overwrite also took place here due to three backspaces.*/
