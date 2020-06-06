#include <stdio.h>
enum numbers
{
    zero, one, two, three , four=3,five,six,seven=0,eight
};
void main()
{
    printf("%d,%d,%d,%d,%d,%d,%d,%d,%d",zero,one,two,three,four,five,six,seven,eight);
}
/*
OPTIONS:
0,1,2,3,3,4,5,0,1
0,1,2,4,5,6,7,8,9
0,1,2,3,3,1,2,3,4
0,1,2,3,3,4,5,0,9
Answer & Explanation
Correct Answer: 0,1,2,3,3,4,5,0,1

We have discussed that enum values starts with 0 (if we do not provide any value) and increase one by one.

We are assigning 3 to four, then four will be 3, five will be 4 ... 
again we are assigning 0 to seven then seven will be 0 and eight will be 1.
*/
