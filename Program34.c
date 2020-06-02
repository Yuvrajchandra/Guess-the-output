#include<stdio.h>
main()
{
    float me = 1.1;
    double you = 1.1;
    if(me==you)
    {
        printf("No one is idiot");
    }
    else
    {
        printf("Everyone is idiot");
    }
}

//correct output- Everyone is idiot
//beacuse compiler will treat double and float as different numbers .Also they are non terminating decimals


//NOTE:
//In case of terminating decimals double and float will be equal
//But in case of non-terminating decimals both will be treated different
