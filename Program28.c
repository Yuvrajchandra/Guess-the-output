//Iterate from 1 to 10 without using any type of loop

#include<stdio.h>
main()
{
    int i=0;

    label:
        {

            if(i<10)
            {
                i++;
                printf("%d \t",i);
                goto label;
            }
        }
}

