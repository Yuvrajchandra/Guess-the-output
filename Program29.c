//Represent Infinite loop in goto

#include<stdio.h>
main()
{
    int i=1;

    label:
        {

            if(i>0)
            {
                i++;
                printf("%d \t",i);
                goto label;
            }
        }
}

