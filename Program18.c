#include<stdio.h>
main()
{
    int i=0;
    for(printf("Hii\n"); i<printf("ok\n"); printf("Namaste\n"))
    {
        printf("World: %d\n",i);
        i++;
    }
}

//CORRECT OUTPUT-
//Hii
//ok
//World: 0
//namaste
//ok
//World: 1
//namaste
//ok
//World: 2
//namaste
//ok


//this is because
