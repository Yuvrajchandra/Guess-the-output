//this is a program for prime numbers.
//Debug and find what's wrong in this code
#include<stdio.h>
main()
{
    int i, c=0, n=7;
    for(i=0; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
        }
        if(c==2)
        {
            printf("prime");
        }
        else
        {
            printf("Not prime");
        }
    }
}

//When i=0, n%i==0 will perform division of n with 0 which is not valid 
//and program will result in abnormal termination

//Note: || will return true if any of the condition is true
