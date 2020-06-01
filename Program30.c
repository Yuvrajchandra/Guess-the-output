//CREATING INFINITE LOOP IN A FUNCTION

#include<stdio.h>
main()
{

    display();
}

void display()
{
    printf("Infinite Times");
    display();      //calls itself recursively
}
