#include<stdio.h>
int main()
{
    int j,i,a,b,x=0,y=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            x=x+i;
        }
    }
    for(j=1;j<b;j++)
    {
        if(b%j==0)
        {
            y=y+j;
        }
    }
    if(x==b && y==a)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}