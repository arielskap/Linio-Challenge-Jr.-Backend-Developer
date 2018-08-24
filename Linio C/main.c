/*
 Ariel Villarreal, student of "UTN Fra"
 contact: arielvillagu@hotmail.com or phone: 011-21908368
*/
#include <stdio.h>
#include <stdlib.h>

int multiples(int,int);

int main()
{
    int i;
    int Aux3;
    int Aux5;
    for(i=1;i<=100;i++)
    {
        Aux3=multiples(i,3);
        Aux5=multiples(i,5);
        if(Aux3==1 && Aux5==1)
        {
            printf("Linianos\n");
            Aux3=0;
            Aux5=0;
        }
        else if(Aux3==1)
        {
            printf("Linio\n");
        }
        else if(Aux5==1)
        {
            printf("IT\n");
        }
        else
        {
            printf("%d\n",i);
        }
    }
}

//Check if the number is multiple.
int multiples(int i,int multiple)
{
    int resto;
    int ok=0;
    resto=i%multiple;
    if(resto==0)
    {
        ok=1;
    }
    return ok;
}
