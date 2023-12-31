#include<stdio.h>
int main()
{
    int bs;
    float gs;
    scanf("%d",&bs);
    if(bs<=10000)
    {
        gs=bs+((80/100.0)*bs)+((20/100.0)*bs);
    }
    else if(bs<=20000)
    {
        gs=bs+((90/100.0)*bs)+((25/100.0)*bs);
    }
    else
    {
        gs=bs+((95/100.0)*bs)+((30/100.0)*bs);
    }
    printf("%.2f",gs);
}